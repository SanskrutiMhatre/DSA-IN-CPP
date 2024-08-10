#include<iostream>
using namespace std;

int main(){
  int reverse=0,temp;
  int no; cin>>no;
  int num=no;
  while(num>0){
   temp=num%10;
   num = num/10;
  reverse=reverse*10+temp;
  }
  if (no==reverse) cout<<"palindrome hai";
  else cout<<"palindrome nai hai";
  return 0;
}