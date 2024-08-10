#include<iostream>
using namespace std;
int main(){
  int n; cin>>n;
  for(int i=1;i<=n;i++){
    int countl=1;
    int countr=i-1;
    int j=1;
    while(j<=n+i-1){
      int space=n-i;
      if(j<=space){
        cout<<" ";
        space--;
      }
       else if(j<=n){
         cout<<countl;
         countl++;
       }
      else{
        cout<<countr;
        countr--;
      }
      j++;
      
    }
 
    cout<<endl;
  }
  return 0;
}











// int inc=(i<=n) ? i:0;
// int dec=(i>n) ? n-1:0;