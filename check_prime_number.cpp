#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter the number to checked: ";
  cin>>n;
  int i;
  for (i = 2; i <= n; i++)
  {
    if (n%i == 0)
    {
      break;
    }
  }
  if (i == n)
  {
    cout<<n<<" is prime.";
  }
  else
  {
    cout<<n<<" is not prime.";
  }
}
