#include<iostream>
using namespace std;

// int main(){
//     int n, sum=0;
//     cin >> n;
//     int input[n];
//     for(int i=0;i<n;i++){
//         cin >> input[i];
//     }
//      for(int i=0; i<n; i++){
//          sum = sum + input[i];
//      }
//     cout << sum << endl;
//     return 0;
// }

bool linearSearch(int arr[], int n ,int val){
    for(int i=0;i<n;i++){
        if(arr[i]==val){
            return 1;
        }
    }
    return 0;
}

void populate(int arr[],int n){
    int j=0;
    for(int i=0; i < n; i = i + 2){
        arr[n-1-j] = i+2;
        arr[j] = i+1;
        j++;
    }
}

void swapAlternate(int arr[],int size){
    for(int i=0;i<size-1;i=i+2){
        int temp = arr[i];
        arr[i] = arr[i+1];
       arr[i+1] = temp;
    }
}

int pairSumToX(int input[], int size, int x){
  int pairs = 0;
  for(int i=0; i<size; i++){
    for(int j=i; j<size; j++){
      if(input[i] + input[j] == x){
        pairs++;
        cout<<input[i]<<input[j]<<" ";
      }
    }
  }
  return pairs;
}

int tripletSumToX(int input[], int size, int x){
  int triplets = 0;
  for(int i=0; i<size; i++){
    for(int j=i; j<size; j++){
      for(int k=j; k<size; k++){
        if(input[i] + input[j] + input[k] == x){
          triplets++;
          cout<<input[i]<<input[j]<<input[k]<<" ";
        }
      }
    }
  }
  return triplets;
}

void sort0sand1s(int input[], int size){
   int nextZero = 0;
  for(int i=0; i<size; i++){
    if(input[i] == 0){
      int temp = input[i];
      input[i]= input[nextZero];
      input[nextZero] = temp;
      nextZero++;
    }
  }
  for(int i=0;i<size;i++){
    cout<<input[i];
  }
}

int main(){
  int arr[8]={1,1,1,1,0,0,0,0};
  int n=8;
  int val=10;
  sort0sand1s(arr,n);

  return 0;
}