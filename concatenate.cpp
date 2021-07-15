#include<iostream>
#include<string>
using namespace std;

int main(){
  string s1, s2;
  cout<<"Enter first string: ";
  cin>>s1;
  cout<<"\nEnter second string: ";
  cin>>s2;

  string s3;

  s3 = s2 + s1;
  cout<<"\nConcatenated string: ";

  cout << s3;
  return 0;
}
