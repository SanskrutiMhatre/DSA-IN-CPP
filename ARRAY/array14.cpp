#include <bits/stdc++.h>
using namespace std;
void shift(int arr[]){
  for(int i=0;i<5;i++){
    for(int j=4;j>=0;j--){
      swap(arr[i],arr[j]);
      break;
    }
  }
}

int main(){
  int arr[5]={10,20,30,40,50};
  shift(arr);
  for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}