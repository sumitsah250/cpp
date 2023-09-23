#include<iostream>
using namespace std;
class X{
    int a,b;
    public:
    X(int a1=0,int b1=0){
        a=a1;
        b=b1;
    }
    friend X operator ++(X & o1);
    void display(){
        cout<<"the valu of a and b is"<<a<<b<<endl;
    }
    friend X operator ++(X & o1,int x);
};
X operator ++(X & o1){
    o1.a++;
    o1.b++;
    return o1;
    }
X operator ++(X & o1,int x){
    X temp =o1;
    o1.a++;
    o1.b++;
    return temp;
    }
int main()
{
     X c1(5,6);
     c1.display();
     ++c1;
     c1.display();
     c1++;
     c1.display();
     c1.display();
return 0;
}