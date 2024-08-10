#include <iostream>
using namespace std;
void display(int arr[], int size) {
  for (int i = 0; i < size; i++)
    cin >> arr[i];
  for (int i = 0; i < size; i++)
    cout << arr[i]<<" ";
}

int main() {
  int arr[5];
  int size = 5;
  display(arr, size);
}