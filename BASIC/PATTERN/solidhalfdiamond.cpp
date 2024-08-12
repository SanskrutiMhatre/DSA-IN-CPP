#include<iostream>
using namespace std;

int main(){
  int num;cin>>num;
  for(int i=1;i<=2*num-1;i++){
    int star=(i<=num) ? i:2*num-i;
    for(int j=1;j<=num;j++){
      if(j<=star){
      cout<<"*";
      }
    }
    cout<<endl;
  }
  return 0;
}