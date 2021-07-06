#include<iostream>
using namespace std;

class person{
  char name[40];
public:
  void setname(){                                   //get input
    cout<<"Enter name: ";
    cin>>name;
  }
  void printname(){                                 //display name
    cout<<"\n   Name is:  "<<name;
  }
};

int main(){
  person* persPtr[100];                               //array of pointers to class
  int n = 0;                                          //number of persons in array
  char choice;

  do{
    persPtr[n] = new person;                            //make new object
    persPtr[n]->setname();                              //set person's name
    n++;                                                //count new person
    cout<<"Enter another entry:(y/n)?";                  //Enter aother person?
    cin>>choice;
  }while(choice == 'y');                                 //quit on n

  for(int i = 0; i < n; i++)                              //prints name of all persons
  {
    cout<<"\nPerson number  "<<i+1;
    persPtr[i]->printname();
  }
  cout<<endl;
  return 0;
}
