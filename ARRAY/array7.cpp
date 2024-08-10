#include<bits/stdc++.h>
using namespace std;

void reversekare(int arr[],int size){
  int result[5];
  for(int i=0;i<size;i++){
    for(int j=size-i-1;j>=0;j--){
      
      swap(result[i],arr[j]);
        break;
    }
  }
  for(int i=0;i<size;i++)
    cout<<result[i]<<" ";
}
  
//   int left=0;
//   int right=size-1;
//   while(left<size){
//     if(left<=right){
//     swap(arr[left],arr[right]);
//     }
//     left++;
//     right--;
//   }
// }

int main(){
  int arr[5]={60,20,90,50,40};
  
  int size=5;
  // reverse(a,a+size);
  // reversekare(arr,size);

  int a=2;
  int b=5;

  a=a^b;
  b=a^b;
  a=a^b;
  cout<<a<<" "<<b;
  return 0;
}