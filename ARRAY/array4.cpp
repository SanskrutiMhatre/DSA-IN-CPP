#include <iostream>
using namespace std;
void display(int arr[], int size) {
  for (int i = 0; i < size; i++)
    arr[i] = arr[i] + 10;
  return;
}

bool present(int arr[], int size, int target) {
  for (int i = 0; i < size; i++)
    if (arr[i] == target)
      return 1;
  return 0;
}
int maxmin(int arr[], int size) {
  int maxi = arr[0];
  int mini = arr[0];
  for (int i = 0; i < size; i++) {
    maxi = max(maxi, arr[i]);
    mini = min(mini,arr[i]);
  }

  //  if(max<arr[i]){
  //    max=arr[i];
  //  }
  // if(min>arr[i]){
  //     min=arr[i];
  //   }
  // }
   cout<<"minimum is:"<<mini<<endl;
  cout << "maximum is:" << maxi<<endl;
  return 0;
}
int main() {
  int arr[5] = {111, 222, 333, 444, 555};
  int size = 5;
  // int target=90;
  // display(arr, size);
  // for (int i = 0; i < size; i++)
  //   cout << arr[i]<<" ";
  // cout<<present(arr,size,target)<<endl;
  maxmin(arr, size);
}