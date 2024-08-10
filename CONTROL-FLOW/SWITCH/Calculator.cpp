#include <iostream>
using namespace std;
int main() {
  int ch, a, b;
  cout << "enter value of a:" << endl;
  cin >> a;
  cout << "enter value of b:" << endl;
  cin >> b;

  cout << "1.ADDITION 2.SUBTRACTION 3.DIVISION 4.MULTIPLICATION" << endl
       << "Enter Your Choice:" << endl;
  cin >> ch;

  switch (ch) {
  case 1:
    cout << "ADDITION OF TWO NUMBERS ARE:" << a + b << endl;
    break;
  case 2:
    cout << "SUBTRACTION OF TWO NUMBERS ARE:" << a - b << endl;
    break;
  case 3:
    cout << "DIVISION OF TWO NUMBERS ARE:" << a / b << endl;
    break;
  case 4:
    cout << "MULTIPLICATION OF TWO NUMBERS ARE:" << a * b << endl;
    break;
  default:
    cout << "SELECT VALID OPTION" << endl;
  }
  return 0;
}