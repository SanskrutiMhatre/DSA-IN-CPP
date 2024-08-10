#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "enter number:";
  cin >> n;
  for (int a = n; a >= 1; a--) {
    if (a % 2 == 0) {
      continue;
    } else {
      for (int j = 0; j < a; j++) {
        if (j % 2 == 0) {
          cout << "1 ";
        } else {
          cout << "0 ";
        }
      }
      cout << endl;
    }
  }
  return 0;
}