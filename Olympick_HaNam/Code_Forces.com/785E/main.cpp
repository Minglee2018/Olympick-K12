#include <cstdio>
#include <iostream>
using namespace std;

#define lowbit(k) (k & -(k))
const int maxn = int(2e5) + 111;
int n, m;

struct Node {
    int sum, ls, rs;
    Node() {}
    Node(int s, int l, int r) : sum(s), ls(l), rs(r) {}
} node[maxn * 85];

int root[maxn], tot = 0;

void seg_modify(int k, int l, int r, int pos, int val) {
    if (l == r && l == pos) {
        node[k].sum = val;
        return;
    }
    int mid = (l + r) >> 1;
    int &ls = node[k].ls, &rs = node[k].rs;
    if (pos <= mid) {
        if (!ls)
            ls = ++tot;
        seg_modify(ls, l, mid, pos, val);
    } else {
        if (!rs)
            rs = ++tot;
        seg_modify(rs, mid + 1, r, pos, val);
    }
    node[k].sum = (ls ? node[ls].sum : 0) + (rs ? node[rs].sum : 0);
    return;
}

int seg_query(int k, int l, int r, int ql, int qr) {
    if (ql <= l && r <= qr)
        return node[k].sum;
    int mid = (l + r) >> 1;
    int &ls = node[k].ls, &rs = node[k].rs;
    if (qr <= mid)
        return ls ? seg_query(ls, l, mid, ql, qr) : 0;
    if (ql > mid)
        return rs ? seg_query(rs, mid + 1, r, ql, qr) : 0;
    return (ls ? seg_query(ls, l, mid, ql, qr) : 0) +
           (rs ? seg_query(rs, mid + 1, r, ql, qr) : 0);
}

void bit_build() {
    for (int i = 1; i <= n; i++)
        root[i] = i;
    tot = n;
    for (int i = 1; i <= n; i++) {
        int len = lowbit(i);
        for (int j = i; j >= (i - len + 1); j--)
            seg_modify(root[i], 1, n, j, 1);
    }
    return;
}

int bit_query(int pos, int l, int r) {
    int res = 0;
    while (pos) {
        res += seg_query(root[pos], 1, n, l, r);
        pos -= lowbit(pos);
    }
    return res;
}

void bit_modify(int pos, int val, int dir) {
    while (pos <= n) {
        seg_modify(root[pos], 1, n, val, dir);
        pos += lowbit(pos);
    }
    return;
}

int a[maxn];

int main() {
    scanf("%d%d", &n, &m);
    bit_build();

    long long ans = 0;
    for (int i = 1; i <= n; i++)
        a[i] = i;

    while (m--) {
        int x, y;
        scanf("%d%d", &x, &y);
        int g1 = bit_query(n, 1, a[x] - 1) - bit_query(x, 1, a[x] - 1) +
                 bit_query(x - 1, a[x] + 1, n);
        bit_modify(x, a[x], 0);
        int g2 = bit_query(n, 1, a[y] - 1) - bit_query(y, 1, a[y] - 1) +
                 bit_query(y - 1, a[y] + 1, n);
        bit_modify(y, a[y], 0);
        ans -= g1 + g2;
        swap(a[x], a[y]);

        bit_modify(x, a[x], 1);
        int c1 = bit_query(n, 1, a[x] - 1) - bit_query(x, 1, a[x] - 1) +
                 bit_query(x - 1, a[x] + 1, n);
        bit_modify(y, a[y], 1);
        int c2 = bit_query(n, 1, a[y] - 1) - bit_query(y, 1, a[y] - 1) +
                 bit_query(y - 1, a[y] + 1, n);
        ans += c1 + c2;
        printf("%I64d\n", ans);
    }

    return 0;
}
