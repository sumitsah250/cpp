#include<iostream>
using namespace std;
class Base1{
    public:
        int n1=0;
    int getdata(){
        cout<<"this is from base1 class"<<endl;
       return n1;
    }
   
};
class Base2{
    public:
    int n2=0;
    int getdata(){
                cout<<"this is from base2 class"<<endl;

       return n2;
    }

};
class Derived:public Base1 , public Base2
{
      public:
      void showdata(){
        cout<<"the value of n1 "<<Base1::getdata()<<endl;
        cout<<"the value of n2 "<<Base2::getdata()<<endl;
        cout<<"the sum of n1 and n2 is:"<<n1+n2<<endl;
      }
};
int main()
{
Derived d1;
d1.n1=5;
d1.n2=10;
d1.showdata();
return 0;
}