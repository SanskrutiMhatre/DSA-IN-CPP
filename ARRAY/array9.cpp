#include <bits/stdc++.h>
using namespace std;
void sorting(int arr[]){
  int count0=0, count1=0;
  for(int i=0;i<8;i++){
    if(arr[i]==0) count0++;
    else if(arr[i]==1) count1++;
  }
  int count =count0+count1;
  fill(arr,arr+count0,0);
  fill(arr+count0,arr+count,1);
  fill(arr+count,arr+8,2);
}


int main(){
  int arr[8]={1,0,1,0,1,2,2,2};
  // sort(arr,arr+5);
  sorting(arr);
  for(int i=0;i<8;i++){
    cout<<arr[i];
  }
  return 0;
}