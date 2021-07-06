#include<iostream>
#include<string>
using namespace std;

class person{                       //person class
private:
  string name;                       //person name
public:
  void setname(){
    cout<<" Enter name: ";
    cin>>name;
  }
  void display(){
    cout<<endl<<name;
  }
  string getname(){
    return name;
  }
};

int main(){
  void bsort(person**, int);                          //prototype
  person* persPtr[100];                                //arrays of pointers to persons
  int n = 0;                                          //nummbers of persons in arrays
  char choice;                                        //input char

  do{                                                   //put persons in array
  persPtr[n] = new person;                              //make new object
  persPtr[n]->setname();                                //set person's name
  n++;                                                  //count new person
  cout<<"Enter another (y/n)?";                         //enter another
  cin>>choice;
}while(choice == 'y');                                    //quit on 'n'

cout<<"\nUnsorted List: "<<endl;                          //print unsorted list

for(int i = 0; i < n; i++){
  persPtr[i]->display();
}

bsort(persPtr, n);                                        //sort pointers

cout<<"\nSorted List: "<<endl;                            //print sorted list
for(int i = 0; i < n; i++){
  persPtr[i]->display();
}

return 0;
}

void bsort(person** pp, int n){                           //sort pointers to persons
  void order(person**, person**);                          //prototype
  int i, j;                                               //indexes to array
  for(i = 0; i < n-1; i++){                                 //outer loop
    for(j = i+1; j < n; j++){                               //inner loop starts at outer
      order(pp+i, pp+j);                                   //order the pointer contents
    }
  }
}

void order(person** pp1, person** pp2){                     //orders two pointers
  if((*pp1)->getname() > (*pp2)->getname()){                  //if firts larger than second
    person* temptr = *pp1;                                  //swaps the pointers
    *pp1 = *pp2;
    *pp2 = temptr;
  }
}
