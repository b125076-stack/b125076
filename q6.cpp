#include<iostream>
#include<string>
using namepace std;
class product{

    int productId,quality;
    string productname;
    float price;
    public:
        void input(){
            cout<<"enter the productId:"
            cin>>product;
            cout<<"product name:";
          getline(cin,productname);
            cout<<"Enter the price: ";
            cin>>price;
            cout<<"Enter the quality:";
            cin>>quality;

        }
        void display(){
            cout<<"product id:"<<productId;
            cout<<"product name:"<<productname;
            cout<<"price"<<price;
            cout<<"quantity"<<quantity<<endl;
            cout<<"total cost"<<price*quantity<<endl;
        }
        };
       
            int main(){
            cout<<"enter the name of product:";
            cin>>n;
            product *p=new product [n];
            for(int i=0;i<n;i++)
            {
                cout<<"\n enter the details of product:"<<i<<endl;
                p[i].input();
            }
            cout<<"\n======product details"<<i<<endl;
            for(int i=0;i<n;i++){
                cout<<"\n product"<<i+1<<endl;
            }
            p[i].display();
            return 0;

        

        }