#include <iostream>
using namespace std;
int main() {
  int age;
  cout << "enter your age:" << endl;
  cin >> age;
  (age >= 18) ? cout << "you can vote" : cout << "you can not vote" << endl;
  return 0;
}
