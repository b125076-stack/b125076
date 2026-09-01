#include<iostream>
using namespace std;
int main(){
    int seats[6] ={101 , 102 ,103, 104 ,105 ,106};
    int *ptr = seats;
    int position, newseatnumber; 

    cout<<" seat number before update :\n";
    for(int i=0; i<7;i++){
        cout<< *(ptr + i)<<" ";

    }
    cout<<"\n \n enter the position to update :";
    cin>>position;

    cout<<" Enter the new seat : ";
    cin>> newseatnumber;

    if(position>=1 && position<=6){
        *(ptr+(position-1))= newseatnumber;


    }else{
        cout<<" invalid position : "<<endl;
        return 0;

    }
    cout<<" \n no of seats after updation :\n";
    
    for(int i=0;i<7;i++){
        cout<<*(ptr+i)<< " ";

    }
    return 0;

}
