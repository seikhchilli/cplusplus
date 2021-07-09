#include<iostream>
using namespace std;

int main(){
  int n;

  while(true){//cycle until input ok
    cin.unsetf(ios::skipws);      //don't ignore whitespace
    cin>>n;


    if(cin.good()){                     //if no errors--goodbit true
      cin.ignore(10, '\n');             //remove newline
      break;                            //exit loop

    }
    if(cin.fail()){                       //in case nothing is entered--failbit true
      cout<<"Please enter some integer"<<endl;
    }
    cin.clear();                       //clear the error bits
    cout<<"Incorrect input";

    cin.ignore(100, '\n');            //remove new line
  }
  cout<<"Integer is "<<n;             //error free Integer
}
