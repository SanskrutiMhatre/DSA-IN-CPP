#include <iostream>
using namespace std;
int main() {
  int count = 1;
  for (int k = 0; k < 6; k++) {

    for (int i = 6; i > k; i--) {
      cout << "  ";
    }

    for (int j = 0; j <= k; j++) {
      if (j == 0 || k == 0) {
        count = 1;
      } else {
        count = count * (k - j + 1) / j;
      }
      cout << count << "   ";
    }
    cout << endl;
  }

  return 0;
}
