#include<iostream>
using namespace std;
class x{
    int a,b;
    public:
    x(int a,int b){
        this->a=a;
        this->b=b;
    }
    void show(){
        cout<<a<<b<<endl;
    }
    void operator ++(){
        a++;
        b++;
    }
    void operator ++(int){
        a++;
        b++;
    }

};
int main()
{
    x a1(2,5),a2(2,5);
    a1.show();
    a1++;
    a1.show();
    a2.show();
    ++a2;a2.show();

return 0;
}