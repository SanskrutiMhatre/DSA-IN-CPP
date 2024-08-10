#include<iostream>
using namespace std;
void sorting(int arr[]){
  int j0=0,j1=0;
  for(int i=0;i<9;i++){
    if(arr[i]==0){
      int temp = arr[i];
      arr[i]=arr[j0];
      arr[j0]=temp;
      j0++;
      j1++;
    }
  }
  for(int i=0;i<9;i++){
    if(arr[i]==1){
      int temp = arr[i];
      arr[i]=arr[j1];
      arr[j1]=temp;
      j1++;
    }
  }
}
int main(){
  int arr[9]={1,1,0,0,1,1,0,2,2};
  sorting(arr);
  for(int i=0;i<9;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}

