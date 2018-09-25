#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

const int N = 1 << 18;
int uf[N];
int cost[N];
vector<pair<int, int>> h_uf;
vector<pair<int, int>> h_cost;
pair<int, int> query[N];
int ans[N];

bool sample;

struct edge {
  int u, v, w;
  edge(int u, int v, int w) : u(u), v(v), w(w) {}
};

vector<edge> seg[N * 2];

int find(int u) {
  while (uf[u] >= 0) {
    u = uf[u];
  }
  return u;
}

int find_cost(int u) {
  int res = 0;
  while (uf[u] >= 0) {
    res ^= cost[u];
    u = uf[u];
  }
  return res;
}

bool unite(int u, int v, int w) {
  int pu = find(u);
  int pv = find(v);
  if (pu == pv) return false;
  w ^= find_cost(u);
  w ^= find_cost(v);
  u = pu;
  v = pv;
  if (-uf[u] < -uf[v]) swap(u, v);
  h_uf.emplace_back(u, uf[u]);
  h_uf.emplace_back(v, uf[v]);
  h_cost.emplace_back(v, cost[v]);
  uf[u] += uf[v];
  uf[v] = u;
  cost[v] = w;
  return true;
}

void undo() {
  auto p = h_uf.back(); h_uf.pop_back();
  auto q = h_uf.back(); h_uf.pop_back();
  auto r = h_cost.back(); h_cost.pop_back();
  uf[p.first] = p.second;
  uf[q.first] = q.second;
  cost[r.first] = r.second;
}

int find_cost(int u, int v) {
  return find_cost(u) ^ find_cost(v);
}

void init_uf(int n) {
  for (int i = 0; i < n; i++) {
    uf[i] = -1;
  }
}

void insert(int l, int r, edge e, int k = 1, int ll = 0, int rr = N) {
  if (rr <= l || r <= ll) return;
  if (l <= ll && rr <= r) {
    seg[k].emplace_back(e);
    return;
  }
  insert(l, r, e, k * 2 + 0, ll, ll + rr >> 1);
  insert(l, r, e, k * 2 + 1, ll + rr >> 1, rr);
}

vector<int> normalize(vector<int> a) {
  int r = 0;
  for (int j = 29; j >= 0; j--) {
    int p = -1;
    for (int i = r; i < a.size(); i++) {
      if (a[i] >> j & 1) {
        p = i;
        break;
      }
    }
    if (p == -1) continue;
    swap(a[r], a[p]);
    for (int i = r + 1; i < a.size(); i++) {
      if (a[i] >> j & 1) {
        a[i] ^= a[r];
      }
    }
    r++;
  }
  a.resize(r);
  return a;
}

int find_min(int x, vector<int> &a) {
  for (int y : a) x = min(x, x ^ y);
  return x;
}

void dfs(vector<int> a, int k = 1, int l = 0, int r = N) {
  int cnt = 0;
  for (edge e : seg[k]) {
    if (unite(e.u, e.v, e.w)) {
      cnt++;
    } else {
      a.push_back(e.w ^ find_cost(e.u, e.v));
    }
  }
  a = normalize(a);
  if (r - l == 1) {
    if (query[l].second != 0) {
      ans[l] = find_min(find_cost(query[l].first, query[l].second), a);
    }
    return;
  }
  dfs(a, k * 2 + 0, l, l + r >> 1);
  dfs(a, k * 2 + 1, l + r >> 1, r);
  while (cnt--) undo();
}

int input() {
  int n;
  scanf("%d", &n);
  return n;
}

int main() {
  int n, m;
  cin >> n >> m;

  init_uf(n);

  map<pair<int, int>, pair<int, int>> mp;

  for (int i = 0; i < m; i++) {
    int u = input() - 1;
    int v = input() - 1;
    int w = input();
    mp[{u, v}] = { w, 0 };
  }

  int q = input();
  for (int i = 1; i <= q; i++) {
    int type = input();
    int u = input() - 1;
    int v = input() - 1;
    if (type == 1) {
      int w = input();
      mp[{u, v}] = { w, i };
    } else if (type == 2) {
      auto it = mp.find({ u, v });
      insert(it->second.second, i, edge(u, v, it->second.first));
      mp.erase(it);
    } else {
      query[i] = { u, v };
    }
  }
  for (auto p : mp) {
    int u = p.first.first;
    int v = p.first.second;
    int w = p.second.first;
    int s = p.second.second;
    insert(s, q + 1, edge(u, v, w));
  }

  sample = n <= 10;
  dfs({});

  for (int i = 1; i <= q; i++) {
    if (query[i].second != 0) {
      printf("%d\n", ans[i]);
    }
  }
}
