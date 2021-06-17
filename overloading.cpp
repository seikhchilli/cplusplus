#include<iostream>
using namespace std;

void fun(int a, int b)
{
  cout<<a<<b;
}
void fun(char c, char d)
{
  cout<<c;
}

int main()
{
  fun('a', 10);
  fun(112, 'b');
}
