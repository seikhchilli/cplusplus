#include<iostream>
using namespace std;

int main(){
  void bsort(string** , int);
  string* week_days[7];
  for(int i = 0; i < 7; i++){
    week_days[i] = new string;
  }

  *week_days[0] = "sunday";
  *week_days[1] = "monday";
  *week_days[2] = "tuesday";
  *week_days[3] = "wednesday";
  *week_days[4] = "thrusday";
  *week_days[5] = "friday";
  *week_days[6] = "saturday";

  cout<<"unsorted list: "<<endl;
  for(int i = 0; i < 7; i++){
    cout<<*week_days[i]<<endl;
  }
  cout<<endl;

  bsort(week_days, 7);

  cout<<"sorted list: "<<endl;
  for(int i = 0; i < 7; i++){
    cout<<*week_days[i]<<endl;
  }
  cout<<endl;
  return 0;
}



void bsort(string** str, int n){
  void order(string** , string**);
  for(int i = 0; i < n-1; i++){
    for(int j = i+1; j < n; j++){
      order((str+i), (str+j));
    }
  }
}

void order(string** str1, string** str2){
  if(**str1 > **str2){
    string *temptr = *str1;
    *str1 = *str2;
    *str2 = temptr;
  }
}
