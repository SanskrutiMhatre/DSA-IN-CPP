#include <iostream>
using namespace std;
int main() {
  int i = 0, sum = 0, a;
  string no, temp;
  cout << "Enter Number:";
  cin >> no;
  while (i < no.size()) {
    temp = no[i];
    a = stoi(temp);
    sum = sum + a;
    i++;
  }
  cout << sum;

  return 0;
}