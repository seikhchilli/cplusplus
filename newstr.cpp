#include<iostream>
#include<cstring>
using namespace std;

class String{
private:
  char* str;
public:
  String(char* s){                    //constructor, one argument
    int length = strlen(s);
    str = new char[length+1];
    strcpy(str, s);
  }

  ~String(){                          //destructor
    cout<<"Deleting str.\n";
    delete[] str;
  }
  void upit(){
    for(int i = 0; i < strlen(str); i++){
      *(str+i) = toupper(*(str + i));
    }
  }

  void display(){                     //display method
    cout<<str<<endl;
  }
};

int main(){
  String s1 = "John Snow, you know nothing.";     //constructor used here of one argument
  s1.upit();
  cout << "s1 = ";                                 //display string
  s1.display();
  return 0;

}
