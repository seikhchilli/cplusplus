#include<iostream>
using namespace std;

void swap(int a,int b)
{
  int c;
  c = a;
  a = b;
  b = c;
  cout<<"Inside function after swapping: "<<endl<<"a = "<<a<<endl<<"b = "<<b<<endl;
}

int main()
{
  int a, b;
  cout<<"Enter value of a and b: "<<endl;
  cin>>a>>b;
  cout<<"Before swapping: "<<endl<<"a = "<<a<<endl<<"b = "<<b<<endl;
  swap(a,b);
  cout<<"After swapping: "<<endl<<"a = "<<a<<endl<<"b = "<<b<<endl;
}
