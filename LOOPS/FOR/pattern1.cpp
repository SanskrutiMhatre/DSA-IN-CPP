#include <iostream>
using namespace std;
int main() {
  int num;
  cout << "enter number: ";
  cin >> num;
  for (int i = 0; i < num; i++) {
    cout << "*";

    for (int j = 1; j <= i; j++) {
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}