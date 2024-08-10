#include <bits/stdc++.h>
using namespace std;
void sorted(int arr[]){
  for(int i=0;i<5;i++){
    for(int j=i;j<5;j++){
      if(arr[i]>arr[j]){
        swap(arr[i],arr[j]);
      }
    }
  }
}
int main(){
  int arr[5]={0,1,0,1,0};
  sorted(arr);
  for(int i=0;i<5;i++){
    cout<<arr[i];
  }
  return 0;
}