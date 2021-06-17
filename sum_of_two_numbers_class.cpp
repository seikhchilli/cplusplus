#include<iostream>
using namespace std;
class sample
{
  int a,b;
public:
  void sum()
  {
    cout<<"Enter any two numbers: "<<endl;
    cin>>a>>b;
    cout<<"Sum is "<<a+b;
  }
};
int main()
{
  sample s;
  s.sum();
}
