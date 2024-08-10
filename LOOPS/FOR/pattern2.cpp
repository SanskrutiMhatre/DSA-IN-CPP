#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "enter number: ";
  cin >> n;
  for (int k = 1; k <= n; k++) {
    if (k % 2 == 0) {
      continue;
    } else {
      for (int i = n; i > k; i--) {
        cout << " ";
      }
      for (int j = 0; j < k; j++) {
        cout << "* ";
      }
      cout << endl;
    }
  }

  for (int a = n - 1; a >= 1; a--) {
    if (a % 2 == 0) {
      continue;
    } else {
      for (int i = n; i > a; i--) {
        cout << " ";
      }
      for (int j = 0; j < a; j++) {
        cout << "* ";
      }
      cout << endl;
    }
  }
  return 0;
}
