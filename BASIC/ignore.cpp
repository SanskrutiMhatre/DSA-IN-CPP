#include <iostream>
using namespace std;
int main() {
  string first, last;
  cout << "enter your name:";
  getline(cin, first);
  cout<< first;
  cin.ignore(256, ' ');
  last = cin.get();

  cout << "shortform of name is:" << first << last;
}