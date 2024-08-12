#include<iostream>
using namespace std;
int main(){
  int num;cin>>num;

  for(int i=0;i<2*num;i++){
    int space= (i<num) ? 2*num-(i*2+2):2*i-(2*num);
    int star=(i<num) ?i+1:num*2-i; 
    for(int j=0;j<2*num;j++){
      if(star>0){
        cout<<"*";
        star--;
      }
   else if(space>0){
      cout<<" ";
      space--;
    }
    else cout<<"*";
    }
    
    cout<<endl;
  }
  return 0;
}

















  