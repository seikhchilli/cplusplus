#include<iostream>
using namespace std;

enum week_days{sun, mon, tue, wed, thru, fri, sat};

int main(){
  week_days day1, day2;
  day1 = sun;
  day2 = thru;

  int diff = day2 - day1;
  cout << "days between  =" << diff << endl;

  if(day1 < day2)
  {
    cout << day1 <<" comes before "<< day2<< endl;

  }
  cout<<day1;
  return 0;
}
