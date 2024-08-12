#include<iostream>
using namespace std;

int main(){
  int num; cin>>num;
  int no=1;
  for (int i=1;i<=num;i++){
    int spacel=num-i;
    int spacer=num-i;
    int number=no;
    int k=1;
    for(int j=1;j<=(num*2)-1;j++){
      if(spacel>0){
        cout<<" ";
        spacel --;
      }
      else if(number>0) {
        if(number>i){
          cout<<k;
          k++;
        }
       else cout<<number;
        number --;
      }      
     else cout<<" ";
    }
    no=no+2;
    cout<<endl;  
  }
  return 0;
}