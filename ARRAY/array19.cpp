#include <iostream>
#include <vector>
using namespace std;
int main(){
  int arr[3][3]={{1,2,3},
                 {4,5,6},
                 {7,8,9}};
    int ans=0,k=0;
    for(int i=0;i<3;i++) ans=arr[i][i]+ans;
    for(int j=2;j>=0;j--){
      ans+=arr[k][j];
      k++;
    }
    cout<<ans<<endl;  
  return 0;
}