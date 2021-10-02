#include<bits/stdc++.h>
using namespace std;

int main(){
  int arr[11] = {1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6};
  cout<<"Array: ";
  for(int i = 0; i < 11; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;

  int res = 0;

  for(int i = 0; i < 11; i++){
    res ^= arr[i];
  }
  cout<<"Element occuring odd number of times: "<<res<<endl;
  return 0;
}
