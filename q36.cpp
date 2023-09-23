#include<iostream>
using namespace std;
template <class t>
class base{
    t data;
    public:
    base(){}
    base(t a){
        data=a;
    }
    void display(){
        cout<<data;
    }
};
template<class t>
class derived:public base<t>{
    public:
    derived(){}
    derived(t a):base<t>(a){}
};
int main()
{
    derived<int> sumit(6);
    sumit.display();

return 0;
}