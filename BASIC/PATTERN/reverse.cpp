#include<iostream>
using namespace std;

int main(){
  int num;cin>>num;
  for(int i=1;i<=num;i++){
    for(int j=i;j<=num;j++){
      // if(i==1||i==num||j==i||j==num) 
      cout<< j;
    //   else cout<<" ";    
    }
    cout<<endl;
  }
  return 0;
}