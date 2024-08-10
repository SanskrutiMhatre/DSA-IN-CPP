#include <bits/stdc++.h>
using namespace std;
bool twosum(int arr[],int target){
  for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        if(arr[i]+arr[j]==target) return true;
     
  } 
  }
  return false;
}
int main(){
  int arr[5]={10,20,30,40,50};
  int target=30;
 cout<< twosum(arr,target);
  return 0;
}