#include<iostream>
using namespace std;

int main(){
  int num;cin>>num;
  int no=1;
  int temp=4*num-3;
  for(int i=0;i<num;i++){
   int space= (temp/2)-i;
     int number=no;
    for(int j=1;j<=temp;j++){
      if(space>0){
        cout<<"*";
      space--;
    }
      else if(number>0) {
        if(number%2!=0) cout<< i+1;
        else cout<<"*";
        number --;
      }
      else cout<<"*";
    }

    no=no+2;
    cout<<endl;
  }
  return 0;
}