#include<iostream>
using namespace std;

class Base{
public:
  virtual ~Base(){
    cout<<"Base destroyed."<<endl;
  }
};

class Derived: public Base{
public:
  virtual ~Derived(){
    cout<<"Derived destroyed."<<endl;
  }
};

int main(){
  Base* pBase = new Derived;
  delete pBase;
  return 0;
}
