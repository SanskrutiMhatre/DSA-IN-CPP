#include <iostream>
using namespace std;
int main() {
  int i;
  for (i = 1; i <= 8; i++) {
    for (int j = 1; j <= 5; j++) {

      if (i % 2 == 0) {
        break;
      }

      if (i == 1 || i == 7) {
        cout << "*";
      } else if (j != 1 && j != 5) {
        cout << " ";
      } else {
        cout << "*";
      }
    }

    cout << endl;
  }

  return 0;
}