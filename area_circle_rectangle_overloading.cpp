#include<iostream>
using namespace std;

void area(float a, float b)
{
  float area;
  area = a*b;
  cout<<"Area of rectangle = "<<area;
}

void area(float r)
{
  float area;
  area = 3.14 * r * r;
  cout<<"Area of circle = "<<area;
}

int main()
{
  int a, b;
  int r;
  cout<<"Enter the radius of circle: ";
  cin>>r;
  cout<<"Enter length and breadth of rectangle: ";
  cin>>a>>b;
  area(a,b);


}
