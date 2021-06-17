#include<iostream>
using namespace std;
class factorial
{
private:
  int n, fact;
public:
  void input();
  void calc();
  void display();
};

void factorial::input()
{
  cout<<"Enter any number: "<<endl;
  cin>>n;
}

void factorial::calc()
{
  fact = 1;
  for(int i = 1; i <= n; i++)
  {
    fact = fact*i;
  }
}

void factorial::display()
{
  cout<<"Factorial of number "<<n<<" is "<<fact;
}

int main()
{
  factorial f;
  f.input();
  f.calc();
  f.display();

}
