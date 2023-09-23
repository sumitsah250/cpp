#include<iostream>
using namespace std;
template<class t>
class X{
    t a;
    t b;
    public:
    X(t a,t b){
        this->a=a;
        this->b=b;
    }
    void display(){
        cout<<"a="<<a;
        cout<<"b="<<b;
    }
    void swap(){
        t temp;
        temp=a;
        a=b;
        b=temp;
    }
    // void add();

};
// void x<t>::add(){
//     int result;
//     result=a+b;
//     cout<<"the sum of private members is:"<<resul;
// }
int main()
{
     X<int> x1(5,6);
      x1.display();
      x1.swap();
      x1.display();

return 0;
}