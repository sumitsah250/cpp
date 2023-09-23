#include<iostream>
using namespace std;
class Store{
    public:
    static int Id;
    string name;
    Store(){
         Id++;
        cout<<"the constructor called for store Id:"<<Id<<endl;
        name="xxxxxxx";
       
    }
    ~Store(){
        cout<<"Object goes out of scope"<<endl;
        cout<<"the destructor called for store Id:"<<Id<<endl;
        Id--;
    }
    void setdata(){
        cout<<"enter the name of the store for id :"<<Id<<endl;
        cin>>name;
    }
    void getdata(){
        cout<<"the store with Id:"<<Id<<" is "<<name<<endl;
    }

};
int Store:: Id=999;
int main()
{
     {
        Store s1;
        s1.setdata();
        Store s2;
        s2.setdata();
        s1.getdata();
        s2.getdata();
     }
return 0;
}