#include <iostream>
using namespace std;
int main() {
  int no = 1, n = 0, a;
  cout << "Enter a Number:";
  cin >> a;

  while (no <= a) {
    n = n + no;
    no = no + 1;
  }
  cout << "Sum of Numbers:" << n << endl;

  return 0;
}