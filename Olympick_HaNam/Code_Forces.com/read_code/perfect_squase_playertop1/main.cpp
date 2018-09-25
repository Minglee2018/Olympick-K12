#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int main() {
  int n;
  cin >> n;

  int ans = -1e9;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    if (a >= 0) {
      int s = sqrt(a);
      if (s * s != a) {
        ans = max(ans, a);
      }
    } else {
      ans = max(ans, a);
    }
  }
  cout << ans << endl;
}
