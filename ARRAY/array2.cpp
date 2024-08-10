#include <iostream>
using namespace std;

int main() {
  char arr[5] = {1, 2, 3};
  int a = sizeof(arr)/sizeof(arr[0]);
  cout << a;
  return 0;
}