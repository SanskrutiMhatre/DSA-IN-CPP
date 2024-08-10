#include <iostream>
using namespace std;
int main() {
  int len;
  int bre;
  cout << "Enter Length:";
  cin >> len;
  cout << "Enter Breadth:";
  cin >> bre;

  if (len == bre) {
    cout << "IT IS SQUARE";
  } else {
    cout << "IT IS NOT A SQURAE";
  }
}
