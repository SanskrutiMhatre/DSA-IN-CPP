#include <iostream>
using namespace std;

int main() {
  int a=0;
  int count = 0;
  for (int k = 1; k <= 5; k++) {
    for (int i = 5; i > k; i--) {
      cout << "  ";
    }
    for (int j = 1; j <= k; j++) {
      
      if (j == k) {
        count = j;
      } else if (j == 1) {
        count += 1;
      } else {
        count = 0;
      }
      cout << count << "   ";
    }
    cout << endl;
  }

  return 0;
}
