#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int x = 12;
  int y = 14;

  cout<<"x: "<<x<<endl;
  cout<<"y: "<<y<<endl;

  x = x ^ y;
  y = x ^ y;
  x = x ^ y;

  cout<<"\nAfter Swaps: "<<endl<<endl;

  cout<<"x: "<<x<<endl;
  cout<<"y: "<<y<<endl;

}
