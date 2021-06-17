#include<iostream>
using namespace std;

double fun(double n, int p=2){
  double s = 1;
  for(int i = 1; i <=p; i++){
    s = s * n;
  }
  return s;
}

int main(){
  double n;
  int p;
  cout<<"Enter the number:"<<endl;
  cin>>n;
  cout<<"Enter the power you want to raise"<<endl;
  cin>>p;
  double result;
  result = fun(n,p);
  cout<<"Result : "<<result<<endl;
  return 0;

}
