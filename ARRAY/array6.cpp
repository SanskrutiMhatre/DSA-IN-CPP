#include<bits/stdc++.h>
using namespace std;
void kuchtoh(int arr[],int size){
int i=0;
int j=size-1;
  while(i<size){
    if(j==i){
      cout<<arr[i]<<" ";
    }
    else if(i<j) {
    cout<<arr[i]<<" "<<arr[j]<<" ";
    }
    i++;
    j--;
  }
}

int main(){
  int arr[5]={10,40,50,70,90};
  int size=5;
  kuchtoh(arr,size);
  return 0;
}