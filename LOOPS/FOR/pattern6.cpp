#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "Enter a Number: ";
  cin >> n;
  for (int k = 1; k <= n; k++) {
    if (k % 2 == 0 && k != n) {
      continue;
    } else {



      
      for (int i = n; i > k; i--) {
        cout << " ";
      }
      for (int j = 1; j <= k; j++) {
        if (k == 1 || k == n) {
          cout << "* ";
        } else if (j != 1 && j != k) {
          cout << "  ";
        } else {
          cout << "* ";
        }
      }
    }
    cout << endl;
  }
  return 0;
}