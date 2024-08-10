#include <iostream>
using namespace std;

int add(int a, int b) {
  int sum = a + b;
  cout << "The addition of numbers is " << sum << endl;
  return sum;
}
int main() {

  int a, b;
  cout << "enter first number:";
  cin >> a;
  cout << "enter second number:";
  cin >> b;
  add(a, b);
  return 0;
}