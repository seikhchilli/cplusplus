#include<iostream>
using namespace std;

class Base{
public:
  virtual void show() = 0;      //pure virtual functions
};

class Derv1: public Base{
public:
  void show(){
    cout<<"Derv1"<<endl;
  }
};

class Derv2: public Base{
public:
  void show(){
    cout<<"Derv2"<<endl;
  }
};

int main(){
  Base* arr[2];
  arr[0] = new Derv1;
  arr[1] = new Derv2;

  arr[0]->show();
  arr[1]->show();
  return 0;
}
