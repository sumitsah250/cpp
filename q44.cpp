#include<iostream>
using namespace std;
template<class t>
class base{
    t a;
    public:
    base(){}
    base(t a){
        this->a=a;
    }
    void display(){
        cout<<"the value of a is:"<<a;
    }
  

};
template<class t>
class derived:public base<t>{
    t b;
    public:
    derived(t x,t y):base<t>(x){
        b=y;
    }
      void display(){ 
      base<t>::display();
      cout<<"the value of b is:"<<b<<endl;
    }
};
int main()
{
    derived<float> d1(5.5,5);
    d1.display();

return 0;
}