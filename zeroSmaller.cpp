#include <iostream>
using namespace std;

void zeroSmaller(int &a, int &b){
  if(a < b){
    a = 0;
  }
  else{
    b = 0;
  }
}

int main(){
  int a, b;
  cout<<"Enter first number"<<endl;
  cin>>a;
  cout<<"Enter second number"<<endl;
  cin>>b;
  zeroSmaller(a,b);
  cout<<"a = "<<a<<endl;
  cout<<"b = "<<b<<endl;
  return 0;
}
