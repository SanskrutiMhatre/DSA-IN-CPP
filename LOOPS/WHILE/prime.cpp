#include <iostream>
using namespace std;
int main() {
  int x, i = 2, count = 0;
  cout << "Enter Number:";
  cin >> x;
  while (i <= x) {
    if (x % i == 0) {
      count++;
    }
    i++;
  }
  if (count == 1) {
    cout << x << "is a prime number" << endl;
  } else {
    cout << x << "is not a prime number" << endl;
  }
  return 0;
}