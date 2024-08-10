#include <iostream>
using namespace std;
int main() {
  int marks;
  cout << "ENTER YOUR MARKS:";
  cin >> marks;

  if (marks < 25) {
    cout << "FAIL";
  } else if (marks >= 25 && marks <= 45) {
    cout << "GRADE E";
  } else if (marks >= 45 && marks <= 50) {
    cout << "GRADE D";
  } else if (marks >= 50 && marks <= 60) {
    cout << "GRADE C";
  } else if (marks >= 60 && marks <= 80) {
    cout << "GRADE B";
  } else if (marks >= 80) {
    cout << "GRADE A";
  }
}
