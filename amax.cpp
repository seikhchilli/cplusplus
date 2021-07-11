#include<iostream>
#include<algorithm>
using namespace std;

template<class type>
type amx(type *array, int size){
    sort(array, array + size);
    type max;
    max = array[size-1];
    return max;
}

int main(){
    int iarray[10] = {2,5,1,8,3,6,6,6,8,4};
    float farray[10] = {12.36, 452.36, 155.696, 15.55, 566.25, 185.55, 225.5, 225, 785.2, 256.55};

    cout<<"\nHighest value in intArray: "<<amx(iarray, 10);
    cout<<"\nHighest value in floatArray:  "<<amx(farray, 10);
}