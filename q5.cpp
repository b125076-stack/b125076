#include<iostream>
#include<string>
using namespace std;
class book{
    int bookID,price;
    string author,bookTitle;
    public:
    void input(){
        cout<<"Enter the book ID:";
        cin>>bookID;
        cout<<"Enter the price:";
        cin>>price;
        
        cout<<"enter the booktitle:";
        getline(cin,bookTitle);
        cout<<"Enter the author name:";
        getline(cin,author);

    }
    void display(){
        cout<<"----book details----"<<endl;
        cout<<"Book ID :"<<bookID<<endl;
        cout<<"the price of book:"<<price<<endl;
        cout<<"author :"<<author<<endl;
        cout<<"Booktitle:"<<bookTitle<<endl;


    }
};
int main(){
    book *b =new book;
    b->input();
    b->display();
    delete b;
    return 0;
}