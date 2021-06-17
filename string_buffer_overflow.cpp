#include<iostream>
#include<iomanip>//for setw
using namespace std;

int main(){
  const int MAX = 20;
  char str[MAX];

  cout<<"Enter the string: "<<endl;
  cin>>setw(MAX)>>str;

  cout<<"Entered string: "<<endl<<str;
}
