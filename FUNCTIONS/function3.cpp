#include <iostream>
using namespace std;

int factorial(int num) {
  int mul = 1;
  for (int i = 1; i <= num; i++) {
    mul = mul * i;
  }
  cout << "Factorial of number is: " << mul << endl;
  return mul;
}

int main() {
  int num;
  cout << "enter your number: ";
  cin >> num;
  factorial(num);
  return 0;
}