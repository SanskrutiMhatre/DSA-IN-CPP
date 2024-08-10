#include<bits/stdc++.h>
using namespace std;
void count(int arr[],int size){
  int c=0;
  for(int i=0;i<size;i++){
    if(arr[i]==0){
      c++;
    }
  }
  cout<<"0's :"<<c<<endl;
  cout<<"1's :"<<size-c<<endl;

}
int main(){
  int arr[5]={0,1,0,1,0};
  int size=5;
  count(arr,size);
  return 0;
}