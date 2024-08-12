#include <iostream>
using namespace std;

int main() {
  int num;
  cin >> num;
  int no = 1;

  for (int i = 1; i < 2 * num; i = i + 2) {
    for (int j = 1; j <= i; j++) {
      if (j % 2 == 0)
        cout << "*";
      else {
        cout << no;
        no = no + 1;
      }
    }
    cout << endl;
  }

  int n = no - num;
  for (int i = 2 * num; i > 0; i = i - 2) {
    int count = 0;
    int nun = n;
    for (int j = 1; j < i; j++) {
      if (j % 2 == 0) {
        cout << "*";
        count++;
      } else {
        cout << nun;
        nun += 1;
      }
    }
    n = n - count;
    cout << endl;
  }
  return 0;
}
