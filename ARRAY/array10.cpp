#include <bits/stdc++.h>
using namespace std;

void flip(int arr[]){
  for(int i=0;i<5;i++){
    if(arr[i]==0) arr[i]=1;
    else arr[i]=0;
  }
}
int main(){
  int arr[5]={0,1,0,1,0};
  flip(arr);
  for(int i=0;i<5;i++){
    cout<<arr[i];
  }
  return 0;
}