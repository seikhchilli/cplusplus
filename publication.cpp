#include<iostream>
#include<string>
using namespace std;

class publication{
  string title;
  float price;
public:
  void getdata(){
    cout<<"Enter title of publication:"<<endl;
    cin>>title;
    cout<<"Enter price of publication:"<<endl;
    cin>>price;
  }
  void putdata() const{
    cout<<"Title of publication: "<<title<<endl;
    cout<<"Price of publication: "<<price<<endl;
  }
};

class sales{
  float sales[3];
public:
  void getdata(){
    cout<<"Enter sales of 1st month: ";
    cin>>sales[0];
    cout<<"\nEnter sales of 2nd month: ";
    cin>>sales[1];
    cout<<"\nEnter sales of 3rd month: ";
    cin>>sales[2];
  }
void putdata() const{
  cout<<"Sales of 1st month: "<<sales[0]<<endl;
  cout<<"Sales of 2nd month: "<<sales[1]<<endl;
  cout<<"Sales of 3rd month: "<<sales[2]<<endl;
}
};

class book : public publication, public sales{
  int pgcount;
public:
  void getdata(){
    publication::getdata();
    sales::getdata();
    cout<<"Enter number of pages in book:"<<endl;
    cin>>pgcount;
  }

  void putdata() const{
    publication::putdata();
    sales::putdata();
    cout<<"Number of pages in book: "<<pgcount<<endl;
  }

};

class tape : public publication, public sales{
  float plytime;
public:
  void getdata(){
    publication::getdata();
    sales::getdata();
    cout<<"Enter playing time of tape: "<<endl;
    cin>>plytime;
  }
  void putdata() const{
    publication::putdata();
    sales::putdata();
    cout<<"Playing time of tape: "<<plytime<<endl;
  }
};

int main(){
  book b1;
  tape t1;
  b1.getdata();
  t1.getdata();

  b1.putdata();
  t1.putdata();

  return 0;
}
