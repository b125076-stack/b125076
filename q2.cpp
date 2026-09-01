#include<iostream>
using namespace std;
int main(){
    
    float balance= 1000, addamount ,deduedamount;
    float *ptr = &balance;

    cout<<" Enter the amount to add : ";
    cin>>addamount;
    *ptr = *ptr+ addamount;

    cout<<" Enter the amount to dedued : ";
    cin>>deduedamount;
    *ptr = *ptr-deduedamount;
    cout<<" THE final Amount : "<<*ptr<<endl;
    return 0;
}