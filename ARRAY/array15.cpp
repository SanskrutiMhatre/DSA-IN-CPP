#include <iostream>
#include <vector>
using namespace std;
// void print(vector<int> arr){
//   for(int i=0;i<arr.size();i++) cout<<arr[i]<<" ";
// }
int main(){
  vector<int>arr;
  int n;
  cin>>n;
  
  for(int i=0;i<n;i++) {
    int data;
    cin>>data;
    arr.push_back(data);
  }
  
   arr.pop_back();
   arr.pop_back();
  for(int i=0;i<7;i++) cout<<arr[i]<<" ";
  // print(arr);
  return 0;
}