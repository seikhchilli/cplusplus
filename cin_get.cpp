#include<iostream>
using namespace std;

int main(){
  const int MAX= 20;
  char str[MAX];

  cout<<"Enter the string with spaces: "<<endl;
  cin.get(str, MAX);//put string in str

  cout<<"You entered: "<<endl<<str<<endl;

  //---------------------------------------------------------------------------------------------------

  //multiple lines enrtry

  const int MAXI = 2000;
  char line[MAXI];

  cout<<"Enter strings with multiple lines: "<<endl;
  cin.get(line, MAXI, '$'); //terminate with $. default is '\n', that we changed to '$'
  cout<<"you entered: "<<endl<<line;
}
