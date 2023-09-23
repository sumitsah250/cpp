#include<iostream>
using namespace std;
template<class t1,class t2,class t3>
class record{
    t1 a;
    t2 b;
    t3 c;
    public:
    record(t1 p,t2 q, t3 r){
        a=p;
        b=q;
        c=r;
    }
    void show();
};
template<class T1, class T2,class T3>
void record<T1,T2,T3>::show(){
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
}
int main()
{
    record<int,string,float> r1(12,"sumit",12.55);
    record<float,string,char> r2(12.43,"sumit",'s');
    r1.show();
    r2.show();

return 0;
}