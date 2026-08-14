#include<iostream>
using namespace std;
int main (){
    int n, key;
  
    cout<<"enter the no. of elements:";
    cin>>n;
    int *arr = new int[n];
    cout<<"elements of an array:";
    for(int i=0;i<n;i++)
        cin>>arr[i];

    cout<<"enter the elements to search:";
    cin>>key;

    bool found = false;

    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<"elements found at position:" << i;   
            found = true; 
        }
    }

    if (!found)
        cout << "element not found";

    delete[] arr; 

    return 0;
}