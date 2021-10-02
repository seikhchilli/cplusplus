#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n = 9;

  int res = 0, res2 = 0;

  int arr[n-1] = {1, 2, 3, 4, 5, 7, 8, 9};

  cout<<"Array: ";
  for(auto i : arr){
    cout<<i<<" ";
    res ^= i;
  }
  cout<<endl<<endl;
  
  for(auto i = 1; i <= n; i++){
    res2 ^= i;
  }

  cout<<"Missing Number: "<<(res ^ res2)<<endl;
  return 0;
}
