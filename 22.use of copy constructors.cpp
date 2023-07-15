#include<iostream>
using namespace std;
class Number{
    int a=100;
    public:
    Number(){};
    Number(int num){
        a=num;
    }
    // when no copy constructor is found compilar provides its own copy constructor
    // Number(Number & obj){
    //     cout<<"data from copy constructor"<<endl;
    //     a=obj.a;
    // }
    void Display(){
        cout<<"the number is:"<<a<<endl;
    }
};
int main()
{
    Number n1,n2(5);
    n1.Display();
    n2.Display();
    Number n3(n2);
    n3.Display();
return 0;
}