#include<iostream>
#include<fstream>
using namespace std;

int main(){
  ofstream outfile("TEST.TXT");

  outfile<<"I fear thee, ancient Mariner!\n";
  outfile<<"I fear thy skinny hand\n";
  outfile<<"And thou art long, and lank, and brown,\n";
  outfile<<"As in the ribbed sea sand.\n";
  return 0;
}
