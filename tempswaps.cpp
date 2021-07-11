#include<iostream>
using namespace std;

template<class type>
type swaps(type *arg1, type *arg2){
    type temp;
    temp = *arg1;
    *arg1 = *arg2;
    *arg2 = temp;
}

int main(){
    int arg1;
    int arg2;
    cout<<"Enter first argument: "<<endl;
    cin>>arg1;
    cout<<"Enter second argument: "<<endl;
    cin>>arg2;

    swaps(&arg1, &arg2);

    cout<<"Swapped values: "<<endl;
    cout<<arg1<<" "<<arg2;
    return 0;
}