#include <iostream>
using namespace std;
int main() {
  string no;
  cout << "Enter 4 digit Number:";
  cin >> no;

  if (no.size() == 4) {
    cout << "Your reversed Number is:" << no[3] << no[2] << no[1] << no[0]<< endl;
  } else {
    cout << "PLEASE ENTER ONLY 4 DIGIT NUMBER" << endl;
  }
  return 0;
}