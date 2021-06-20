#include<iostream>
#include<string>
using namespace std;

class employee{
  string name;

public:
  long int employee_num;
  string getdata(){
    cout<<"Enter employee name: "<<endl;
    cin>>name;
    return name;
  }

  void putdata(){
    cout<<"Employee Number: "<<employee_num<<endl;
    cout<<"Employee Name: "<<name<<endl<<endl;
  }

};

int main(){
  employee e[100];
  int n = 1;
  for(int i = 1; i <= 100; i++)
  {
    e[i].getdata();
    e[i].employee_num = i;
    n++;
    cout<<"Press 'y' for more entries and 'n' to stop"<<endl;
    char entry;
    cin>>entry;
    if(entry == 'n'){
      break;
    }
    else if(entry == 'y'){
      continue;
    }
  }

  for(int i = 1; i < n ; i++)
  {
    e[i].putdata();
  }
  return 0;
}
