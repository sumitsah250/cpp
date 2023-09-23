#include<iostream>
using namespace std;
template<class t1>
class base{
    t1 data;
    public:
    base(){}
    base(t1 a){
        data=a;
    }
    void display(){
        cout<<data;
    }

};
template<class t2,class t3>
class derived: public base<t2>{
    t3 data1;
    public:
    derived(){}
    derived(t2 a,t3 b):base<t2>(a){
        data1=b;
    }
    void display(){
        cout<<data1;
        base<float>::display();
    }


};
int main()
{
    derived<float,int> sumit(10.30,30);
    sumit.display();
    

return 0;
}