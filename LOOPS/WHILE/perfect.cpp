#include <iostream>
using namespace std;
int main() {
  int a = 1;
  while (a <= 500) {
    int x = 1, sum = 0;
    while (x < a) {
      if (a % x == 0) {
        sum = sum + x;
      }
      x++;
    }
    if (sum == a) {
      cout << sum << endl;
    }
    a++;
  }
  return 0;
}