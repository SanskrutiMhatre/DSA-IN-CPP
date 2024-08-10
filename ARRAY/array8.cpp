#include <bits/stdc++.h>
using namespace std;

int sorting(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    if(arr[i]==arr[i+1]) i=i+2;
    else return arr[i];
  }
  return 0;
}

int main() {
  int arr[7] = {1,3,1,2,2,2,1};
  int size = 7;
  sort(arr,arr+7);
  cout<<sorting(arr, size);

}