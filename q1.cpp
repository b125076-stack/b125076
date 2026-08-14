#include<iostream>
using namespace std;
int main(){
    int *a= new int;
    int *b= new int;
    cout<<"ENter two integers";
    cin>>*a>>*b;
    cout<<"sum ="<<*a+*b<<endl;
    cout<<"difference = "<<*a-*b<<endl;
    cout<<"product = "<<*a**b<<endl;
    if(b!=0){
        cout<<"division"<<(*a/ *b)<<endl;

    }
    else{
        cout<<"not define";

    }

    delete a;
    delete b;

    return 0;
    
}