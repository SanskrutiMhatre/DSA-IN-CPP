#include <bits/stdc++.h>
using namespace std;
void pairs(int arr[]){
  for(int i=0;i<5;i++){
    for(int j=i+1;j<5;j++){
      cout<<arr[i]<<arr[j]<<" ";
  } 
    cout<<endl;
  }
}
int main(){
  int arr[5]={10,20,30,40,50};
  pairs(arr);
  return 0;
}