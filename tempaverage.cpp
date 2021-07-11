#include<iostream>
using namespace std;

template<class type>
type average(type* array, int size){
    type sum = 0;
    type average;
    for(int i = 0; i < size; i++){
        sum += array[i];
    }
    average = (type) sum / size;
    return average;
}

char chrArr[] = {1, 3, 5, 9, 11, 13};
int intArr[] = {1, 3, 5, 9, 11, 13};
long lonArr[] = {1L, 3L, 5L, 9L, 11L, 13L};
double dubArr[] = {1.0, 3.0, 5.0, 9.0, 11.0, 13.0};

int main(){
  cout<<"\n Average of charArray: index = " << (int)average(chrArr, 6);
  cout<<"\n Average of intArray: index = " << average(intArr,  6);
  cout<<"\n Average of lonArray: index = " << average(lonArr,  6);
  cout<<"\n Average of dubArray: index = " << average(dubArr,  6);
  cout<<endl;
  return 0;
}