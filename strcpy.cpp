#include<iostream>
#include<cstring>  //for strcpy(), strcat()
using namespace std;

int main(){
  char str1[] ="Tiger, Tiger, burning bright\n"
                "In the forests of the night";

  const int MAX = 80;
  char str2[MAX];

  strcpy(str2, str1);  //copy str1 to str2-----------strcpy(destination, source)
  cout<<str2<<endl;
}
