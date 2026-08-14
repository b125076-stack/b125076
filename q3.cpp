#include<iostream>
using namespace std;
int main(){
    int n,even = 0, odd =0;
    cout<<"enter the no of elements";
    cin>>n;
    int *arr = new int[n];
    cout<<"Enter the elements of an array:";
    for(int i=1;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0)
        even++;
        else
         odd++;
    }
    cout<<"the no of even elements:"<<even<<endl;
    cout<<"the no of odd elements :"<<odd<<endl;
    delete[] arr;
    return 0;

}