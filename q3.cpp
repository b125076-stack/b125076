#include<iostream>
using namespace std;
int main(){
    int book[5]={ 10,30,40 ,50,60};
    int*ptr = book;

    cout<<" Book id and their address " ;

    for(int i=1; i<=5; i++){
        cout<<" book ids "<<*ptr <<endl;
        cout<<" book adress "<<book<<endl;
       *ptr++;

    }
    return 0;

}