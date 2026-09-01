#include<iostream>
using namespace std;
int main(){
    int parcel =50;
    int *ptr = &parcel;
    cout<<" Original parcel : "<<*ptr<<endl;

    *ptr = *ptr+10;
    cout<<" Updated parcel : "<<*ptr<<endl;
    return 0;
    
}