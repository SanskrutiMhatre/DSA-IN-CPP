#include <iostream>
using namespace std;
int main() {
  int num;
  cout << "enter value of num:";
  cin >> num;
  cout << "TABLES OF NUMBER IS:" << endl;
  for (int i = 1; i <= 10; i++) {
    cout << num << "*" << i << "=" << num * i << endl;
  }
  return 0;
}
