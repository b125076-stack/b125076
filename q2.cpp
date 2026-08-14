#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no. of integers";
    cin >> n;
    int  *arr = new int[n];
    cout<<"enter the elements:"<<n<<endl;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];

    }
    cout<<"the reverse of an array is :";
    for(int i=n;i>=1;i--){
        cout<<arr[i]<<" "<<endl;
    }
    delete[] arr;
    return 0;
}