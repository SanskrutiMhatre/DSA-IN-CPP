#include <iostream>
using namespace std;

int main(){
  int arr[4][4]={{1,2,3,4},
                 {12,13,14,5},
                 {11,16,15,6},
                 {10,9,8,7}};
  int r=4,c=4;

  for(int i=0;i<r;i++){
    if(i!=0 && i!=r-1){
      int j=c-1;
      cout<<arr[i][j]<<" ";
    }
    else if(i==r-1){
      for(int j=c-1;j>=0;j--){
        cout<<arr[i][j]<<" ";
      }
      i--;
      for(int j=0;j<c-1;j++){
        cout<<arr[i][j]<<" ";
      }
      break;
    }
    else{
      for(int j=0;j<c;j++){
        cout<<arr[i][j]<<" ";
      }
    }
  }
  
  return 0;
}