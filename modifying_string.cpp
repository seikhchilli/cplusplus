#include<iostream>
#include<string>
using namespace std; 
int main(){
  string s1("Quick! Send for Count Graystone.");
  string s2("Lord");
  string s3("Don't ");

  s1.erase(0,7);  //remove characters from 0 to 7(excluding 7)

  s1.replace(9, 5, s2);//replace 5 characters from index 9 with s2

  s1.replace(0, 1, "s");//replace 1 character from index 0 with 's'

  s1.insert(0, s3);//insert s3 at index 0

  s1.erase(s1.size()-1, 1);//removes 1 character from Last

  s1.append(3, '!');  //append '!' 3 times

  int x = s1.find(' '); //find a spaces
  while(x < s1.size())//loop while space remains
  {
    s1.replace(x, 1, "/");//replace with slash
    x = s1.find(' '); //find next space

  }

  cout<<"s1: "<<s1<<endl;
  return 0;



}
