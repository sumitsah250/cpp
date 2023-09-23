#include<iostream>
using namespace std;
class y;
class x{
    int a;
    public:
    x(int a){
        this->a=a;
    }
    int friend add(x a,y b);
};
class y{
    int b;
    public:
    y(int b){
        this->b=b;
    }
    int friend add(x a,y b);
};
int add (x p,y q){
  return(p.a+q.b);
}
int main()
{
    x a1(5);
    y a2(5);
    cout<<"the sum is:"<<add( a1,a2);
return 0;
}