#include<iostream>
using namespace std;
int factorial(int num){
  int ans=1;
  while(num>0){
    ans=ans*num;
    num--;
  }
  return ans;
}

void evenodd(int num){
  if(num%2==0) cout<<num<<"even number hai"<<endl;
  else cout<<num<<"odd number hai"<<endl;
}

void prime(int num){
  int counter=0;
  for(int i=2;i<num;i++){
   if(num%1==0 && num%num==0 && num%i!=0) counter+=1;
  }
  if(counter==num-2) cout<<num<<"prime hai";
  else cout<<num<<"prime nai hai"<<endl;
}


int main(){
  int num;cin>>num;
  evenodd(num);
  cout<<num<<"ka factorial"<<factorial(num)<<" "<<"hai"<<endl;
  prime(num);
    return 0;
}