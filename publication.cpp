#include<iostream>
#include<string>
using namespace std;

class date{
  int d;
  int m;
  int y;
public:

  void getdata(){
    cout<<"Enter date:"<<endl;
    cin>>d;
    cout<<"Enter month:"<<endl;
    cin>>m;
    cout<<"Enter year:"<<endl;
    cin>>y;
  }

  void putdata() const{
    cout<<d<<"-"<<m<<"-"<<y;
  }

};

class publication{            //publication
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

class publication2 : public publication, public date{
  date publication_date;
public:
  void getdata(){
    publication::getdata();
    cout<<"Enter date of publication:"<<endl;
    publication_date.getdata();
  }
  void putdata() const{
    publication::putdata();
    cout<<"Date of publication: ";
    publication_date.putdata();
  }

};

class sales{                //sales
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

class book : public publication2, public sales{    //book
  int pgcount;
public:
  void getdata(){
    publication2::getdata();
    sales::getdata();
    cout<<"Enter number of pages in book:"<<endl;
    cin>>pgcount;
  }

  void putdata() const{
    publication2::putdata();
    sales::putdata();
    cout<<"Number of pages in book: "<<pgcount<<endl;
  }

};

class tape : public publication2, public sales{      //tapes
  float plytime;
public:
  void getdata(){
    publication2::getdata();
    sales::getdata();
    cout<<"Enter playing time of tape: "<<endl;
    cin>>plytime;
  }
  void putdata() const{
    publication2::putdata();
    sales::putdata();
    cout<<"Playing time of tape: "<<plytime<<endl;
  }
};

class disk : public publication2, public sales{      //disk
  enum disks{CD, DVD};
  char entry;
  disks disk_type;
public:
  void getdata(){
    publication2::getdata();
    sales::getdata();
    cout<<"Choose either of CD or DVD: \nFor CD, press c and for DVD, press d:"<<endl;

    cin>>entry;
    switch (entry) {
      case 'c':
        disk_type = CD;
        break;
      case 'd':
        disk_type = DVD;
        break;
    }
  }
  void putdata(){
    publication2::putdata();
    sales::putdata();
    if(disk_type == 0){
      cout<<"Disk type available: CD"<<endl;
    }
    else{
      cout<<"Disk type available: DVD"<<endl;
    }
  }
};

int main(){
  book b1;
  tape t1;
  disk d1;
  b1.getdata();
  t1.getdata();
  d1.getdata();

  b1.putdata();
  t1.putdata();

  d1.putdata();

  return 0;
}
