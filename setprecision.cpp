#include<iostream>
#include<iomanip>//for setprecision, etc.
using namespace std;

int main(){
  double m;
  cout<<"Enter value of m: "<<endl;
  cin>>m;
  cout<<"value of m: "<<endl;
  cout<<setiosflags(ios::fixed)//not exponential
      <<setiosflags(ios::showpoint)//always use point
      <<setprecision(2)//number of digits to right
      <<m;//data to be printed

}
