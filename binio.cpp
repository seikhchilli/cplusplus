#include<iostream>
#include<fstream>
using namespace std;

int main(){
  const int MAX = 20;
  int buff[MAX];

  ofstream os("edata.dat", ios::binary);

  for(int i = 0; i < MAX; i++){
    buff[i] = i;
  }

  os.write(reinterpret_cast<char*>(buff), MAX*sizeof(int));
  os.close();
  for(int i = 0; i < MAX; i++){
    buff[i] = 0;
  }

  ifstream is("edata.dat", ios::binary);
  is.read(reinterpret_cast<char*>(buff), MAX*sizeof(int));

  for(int i = 0; i < MAX; i++){
    if(buff[i] != i){
      cerr<<"Incorrect data\n";
      return 1;
    }

  }
  cout<<"data is correct\n";
  return 0;



}
