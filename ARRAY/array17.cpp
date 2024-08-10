#include <iostream>
using namespace std;
int main() {
  // int arr[3][3];
  // fill(&arr[0][0], &arr[0][0] + 9,10);
  // for(int i=0;i<3;i++){
  //   for(int j=0;j<3;j++){
  //     cout<<arr[i][j]<<" ";
  //   }
  // }

  int arr[3][3] = {{1, 2, 3}, 
                   {4, 5, 6}, 
                   {7, 8, 9}};
  cout << "Row Wise: " << endl;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++)
      cout << arr[i][j] << " ";
    cout << endl;
  }
  cout << "Coloumn Wise: " << endl;
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++)
      cout << arr[j][i] << " ";
    cout << endl;
  }
  cout << "Digonal : " << endl;
  // for(int i=2;i>=0;i--) cout<<arr[i][i] << " ";
  // cout << endl;
  int i=0;
  for (int j = 2; j >=0; j--){
    cout<<arr[i][j] << " ";
    i++;
  }
  cout << endl;
  return 0;
}