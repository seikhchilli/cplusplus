#include<iostream>
#include<string>//for string class
using namespace std;

int main(){
  string full_name, nickname, address;//objects of string class
  string greeting("Hello, ");

  cout<<"Enter your full name: ";
  getline(cin, full_name);//read embedded blanks
  cout<<"Your full name is: "<<full_name<<endl;

  cout<<"Enter your nickname: ";
  cin>>nickname;//input to string object

  greeting += nickname;//append name to greeting
  cout<<greeting<<endl;//output: "Hello, Jim"

  cout<<"Enter your address on seperate lines\n";
  cout<<"Terminate with '$'\n";
  getline(cin, address, '$');//reads multiple lines
  cout<<"Your address is: "<<address<<endl;
  return 0;
}
