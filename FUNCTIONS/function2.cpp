#include <iostream>
using namespace std;

void minmax(int a, int b, int c) {
  if (a < b && a < c) {
    cout << "Minimum number is:" << a << endl;
  } else if (b < a && b < c) {
    cout << "Minimum number is:" << b << endl;
  } else {
    cout << "Minimum number is:" << c << endl;
  }
  if (a > b && a > c) {
    cout << "Maximum number is:" << a << endl;
  } else if (b > a && b > c) {
    cout << "Maximum number is:" << b << endl;
  } else {
    cout << "Maximum number is:" << c << endl;
  }
  return;
}

int main() {
  int a, b, c;
  cout << "enter value of a:";
  cin >> a;
  cout << "enter value of b:";
  cin >> b;
  cout << "enter value of c:";
  cin >> c;
  minmax(a, b, c);
  return 0;
}