#include <iostream>
using namespace std;
int main() {
  int no = 1, a;
  cout << "Enter Number:";
  cin >> a;
  while (no <= a) {
    cout << no << endl;
    no = no + 1;
  }
  return 0;
}