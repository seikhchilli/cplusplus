#include<iostream>
#include<cstring>
using namespace std;
const int MAX = 50;

void reversit(char str[MAX])
{
  char str1[MAX];
  for(int i = 0; i < strlen(str); i++){
    str1[i] = str[strlen(str)-1-i];

  }
  str1[strlen(str)] = '\0';
  cout<<str1;
}

int main(){

  char str[MAX];
  cout<<"Enter string to be reversed: "<<endl;
  cin.get(str, MAX);
  reversit(str);
}
