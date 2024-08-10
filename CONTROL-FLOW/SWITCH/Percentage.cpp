#include <iostream>
using namespace std;
int main() {
  int Physics, Chemistry, Biology, Mathematics, Computer, Percentage, total;
  int flag = 0;

  cout << "Enter Marks of Physics: ";
  cin >> Physics;
  cout << "Enter Marks of Chemistry: ";
  cin >> Chemistry;
  cout << "Enter Marks of Biology: ";
  cin >> Biology;
  cout << "Enter Marks of Mathematics: ";
  cin >> Mathematics;
  cout << "Enter Marks of Computer: ";
  cin >> Computer;

  total = Physics + Chemistry + Biology + Mathematics + Computer;
  Percentage = (total / 5);
  if (Percentage >= 90) {
    flag = 1;
  } else if (Percentage >= 80) {
    flag = 2;
  } else if (Percentage >= 70) {
    flag = 3;
  } else if (Percentage >= 60) {
    flag = 4;
  } else if (Percentage >= 40) {
    flag = 5;
  } else {
    flag = 6;
  }
  switch (flag) {
  case 1:
    cout << "Grade A" << endl;
    break;

  case 2:
    cout << " Grade B" << endl;
    break;

  case 3:
    cout << "Grade C " << endl;
    break;

  case 4:
    cout << "Grade D " << endl;
    break;

  case 5:
    cout << "Grade E " << endl;
    break;

  case 6:
    cout << "Fail " << endl;
    break;
  }
  return 0;
}