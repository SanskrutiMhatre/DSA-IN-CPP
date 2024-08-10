#include <iostream>
using namespace std;
bool searching(int arr[3][3], int number) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (arr[i][j] == number)
        return true;
    }
  }
  return false;
}
int main() {
  int arr[3][3];
  int number;
  cin >> number;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++)
      cin >> arr[j][i];
  }
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++)
      cout << arr[i][j] << " ";
    cout << endl;
  }
  cout << searching(arr, number) << endl;
  return 0;
}