#include<iostream>
#include<fstream>                                 //for file I/O
#include<string>
using namespace std;

int main(){
  char ch = 'x';
  int j = 77;
  double d = 6.03;
  string str1 = "seikhchilli";                            //strings without embedded spaces
  string str2 = "sonica";

  ofstream outfile("fdata.txt");                     //create ofstream object

  outfile<<ch                                         //insert or write data
          <<j
          <<' '                                       //needs space between numbers
          <<d
          <<str1
          <<" "                                         //needs spaces between strings
          <<str2;
  cout<<"File written\n";
  return 0;
}
