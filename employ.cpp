//employ.cpp
//models employe database using inheritance
#include<iostream>
#include<string>
using namespace std;
const int len = 80;

class employee{
private:
  char name[len];
  unsigned long number;
public:
  void getdata(){
    cout<<"\n  Enter last name: ";cin>>name;
    cout<<"   Enter number: ";cin>>number;
  }

  void putdata() const{
    cout<<"\n  Name:  "<<name;
    cout<<"\n  Number:  "<<number;
  }

};

class manager : public employee{
  char title[len];
  double dues;
public:
  void getdata()
  {
    employee::getdata();
    cout<<"  Enter title:  "; cin>>title;
    cout<<"  Enter golf dues:  "; cin>>dues;
  }
  void putdata() const{
    employee::putdata();
    cout<<"\n Title: "<<title;
    cout<<"\n Golf club dues: "<<dues;
  }
};

class scientist : public employee{
  int pubs;
public:
  void getdata(){
    employee::getdata();
    cout<<"  Enter number of publications: ";cin>>pubs;
  }

  void putdata()const{
    employee::putdata();
    cout<<"\n  Number of publications: "<<pubs;
  }
};

class laborer : public employee{

};

int main(){
  manager m1, m2;
  scientist s1;
  laborer l1;

  cout<<endl;
  cout<<"\nEnter data for manager 1";
  m1.getdata();

  cout<<" \nEnter data for manager 2";
  m2.getdata();

  cout<<" \nEnter data for scientist 1";
  s1.getdata();

  cout<<" \nEnter data for laborer 1";
  l1.getdata();

  cout<<"\nData for manager 1";
  m1.putdata();

  cout<<"\nData for manager 2";
  m2.putdata();

  cout<<"\nData for scientist 1";
  s1.putdata();

  cout<<"\nData for laborer 1";
  l1.putdata();

  cout<<endl;
  return 0;
}
