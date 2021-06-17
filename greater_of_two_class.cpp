#include<iostream>
using namespace std;
class sample
{
  int a,b;
private:
  void gett()
  {
    cout<<"Enter any two numbers: "<<endl;
    cin>>a>>b;
  }
public:
  void go2()
  {
    gett();
    if (a > b)
      cout<<"Greater number is "<<a;
    else
      cout<<"Greater number is "<<b;
  }
};
int main()
{
  sample s;
  s.go2();
}
