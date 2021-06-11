#include<iostream>
#include<conio.h>
using namespace std;

class tollBooth{
  int car_total;
  double cash_total;
public:
  tollBooth(): car_total(0), cash_total(0.00)
  { }

  void payingCar(){
    car_total++;
    cash_total += 0.50;
  }
  void nopayCar(){
    car_total++;

  }

  void display(){
    cout<<"Total number of cars: "<<car_total<<endl;
    cout<<"Total cash collected: "<<cash_total<<endl;
  }
};

int main(){
  cout<<"Press y for paying car, n for non-paying car, and escape for dispaying total"<<endl;
  char entry;
  int  c;
  tollBooth tb1;
  do{
    entry = getche();
    switch (entry) {
      case 'y':
        tb1.payingCar();
      break;

      case 'n':
        tb1.nopayCar();
      break;

    }
    c = entry;
  }while(c != 27);

  tb1.display();
  exit(0);


  return 0;

}
