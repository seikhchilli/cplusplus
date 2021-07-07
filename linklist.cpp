#include<iostream>
using namespace std;

struct link{
  int data;                           //one element of list
  link* next;                          //pointer to the next link
};

class linklist{
  link* first;                        //pointer to the first link

public:
  linklist(){                           //no-argumnet constructor
    first = NULL;                       //no first link-----it's null value will move to the last link
  }
  void additem(int d);                  //add data item
  void display();                        //display all links

  ~linklist(){                              //destructor
    link* current = first;
    while(current != NULL){
      link* nextone = current->next;              //stores the link for next one from current link as curret link is going to be deleted
      cout<<"Deleting link"<<endl;
      delete current;                           //current link deleted
      current = nextone;                      //link stored in nextone is used to move to the next link
    }
  }
};

void linklist::additem(int d){             //add data item
  link* newlink = new link;                 //make a new link
  newlink->data = d;                        //give newlink data
  newlink->next = first;                    //it points to the next link------while first time running it will givea value of null and after that it will give to the link to next one
  first = newlink;                          //now first point to this link created
}
 void linklist::display(){                    //display all links
   link* current = first;                     //set ptr to fisrt link
   while(current != NULL){
     cout<<current->data<<endl;                 //print data
     current = current->next;                  //move to the next link
   }
 }

int main(){
  linklist li;                                  //makes a linked list

  li.additem(25);                                 //add five items to the list
  li.additem(12);
  li.additem(56);
  li.additem(90);
  li.additem(56);

  li.display();                                   //display entire list
  return 0;
}
