#include<iostream>
#include<fstream>                         //for file I/O
#include<string>
using namespace std;

int main(){
  char ch;
  int j;
  double d;
  string str1;
  string str2;

  ifstream infile("fdata.txt");                   //create ifstream object

  infile >> ch >> j >> d >> str1 >> str2;          //extract data from it

  cout<<ch <<endl                                   //display the data
      <<j <<endl
      <<d <<endl
      <<str1 <<endl
      <<str2 <<endl;

  return 0;
}
