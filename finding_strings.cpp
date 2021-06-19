#include<iostream>
#include<string>
using namespace std;

int main(){
  string s1 ="In Xanadu did Kubla Kahn a stately pleasure dome decree";

  int n;

  n = s1.find("Kubla");//looks for string used at its argument
  cout<<"Found Kubla at "<<n<<endl;

  n = s1.find_first_of("spde");//looks for a group of characters--here("s", "p", "d", "e") and resturns the position of first one it finds
  cout<<"First of spde at "<<n<<endl;

  n = s1.find_first_not_of("aeiouAEIOU");//finds the first character in its string that is not one of a specified group--here(vowels)
  cout<<"First consonant at "<<n<<endl;
  

  n = s1.rfind("d");//scans the string backwards
  cout<<"Last d at "<<n<<endl;

  n = s1.find_last_of("spde");//finds the last character matching one of group of characters
  cout<<"Last of spde at "<<n<<endl;

}
