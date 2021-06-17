#include<iostream>
using namespace std;
int main()
{
  int a, b, c;
  cout<<"Enter any three numbers"<<endl;
  cin>>a>>b>>c;
  int l;
  if(a > b && a > c)
  {
    l = a;
  }
  else if(b > a && b > c)
  {
    l = b;
  }
  else
  {
    l = c;
  }
  cout<<"Largest Number = "<<l;
}
