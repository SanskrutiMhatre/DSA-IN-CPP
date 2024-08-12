#include <iostream>
using namespace std;

int main() {
  int num;
  cin >> num;
  int no = 0;
  int n = 2 * num;
  for (int i = 1; i <= num; i++) {
    int nun = 1;
    int number = (i <= (num / 2) + 1) ? i + no : n - i;
    int reverse = (number / 2);
    for (int j = 1; j <= num; j++) {
      if (number > 0) {
        if (j == 1 || number == 1)
          cout << "*";
        else if (j > reverse) {
          cout<<reverse;
          reverse--;
        } else {
          cout << nun;
          nun++;
        }
        number--;
      } else
        cout << " ";
    }
    no++;
    n--;
    cout << endl;
  }
  return 0;
}