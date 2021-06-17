#include<iostream>
using namespace std;

void si(float p, float t, float r = 0.03)
{
  float interest = p * r * t;
  cout<<"simple interest = "<<interest;
}
main()
{
  float p, t;
  cout<<"Enter the principal amount: ";
  cin>>p;
  cout<<"Enter the time period: ";
  cin>>t;
  si(p,t);
}
