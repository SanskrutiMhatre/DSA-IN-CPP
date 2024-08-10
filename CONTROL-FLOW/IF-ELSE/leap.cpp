#include <iostream>
using namespace std;
int main() {
  int year;
  cout << "ENTER YEAR:";
  cin >> year;
  if (year % 4 == 0 && year % 400 != 0) {
    cout << "Year is Leap Year" << endl;
  } else if (year % 4 == 0 && year % 400 == 0 ) {
    cout << "Year is Century Leap Year" << endl;
  } else {
    cout << "Year is not Leap Year" << endl;
  }
}
