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

class book : public publication{
  int pgcount;
public:
  void getdata(){
    publication::getdata();
    cout<<"Enter number of pages in book:"<<endl;
    cin>>pgcount;
  }

  void putdata() const{
    publication::putdata();
    cout<<"Number of pages in book: "<<pgcount<<endl;
  }

};

class tape : public publication{
  float plytime;
public:
  void getdata(){
    publication::getdata();
    cout<<"Enter playing time of tape: "<<endl;
    cin>>plytime;
  }
  void putdata() const{
    publication::putdata();
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
