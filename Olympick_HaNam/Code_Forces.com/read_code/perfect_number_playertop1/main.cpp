#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int digit_sum(int n) {
  int res = 0;
  while (n > 0) {
    res += n % 10;
    n /= 10;
  }
  return res;
}

int main() {
  int k;
  cin >> k;

  for (int i = 1;; i++) {
    if (digit_sum(i) == 10) {
      k--;
      if (k == 0) {
        cout << i << endl;
        return 0;
      }
    }
  }
}
