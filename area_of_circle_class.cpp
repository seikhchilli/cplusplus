#include<iostream>
using namespace std;

class area
{
  int r, area;
public:
  void input();
  void calc();
  void display();
};

void area::input()
{
  cout<<"Enter radius of circle: "<<endl;
  cin>>r;
}

void area::calc()
{
  area = 3.14 * r * r;
}

void area::display()
{
  cout<<"Area of circle = "<<area;
}

int main()
{
  area a;
  a.input();
  a.calc();
  a.display();
  
}
