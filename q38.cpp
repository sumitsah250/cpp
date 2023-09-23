#include<iostream>
using namespace std;
class student{
    protected:
    int roll;
    public:
    void getdata1(int a){
        roll=a;
    }
    void putdata1(){
        cout<<"the student roll is:"<<roll<<endl;
    }
};
class test:public virtual student{
    protected:
    float test1,test2;
    public:
    void getdata2(float a,float b){
        test1=a;
        test2=b;
    }
    void putdata2(){
        cout<<"the marks int test1 and test2 is:"<<test1<<test2<<endl;
    }
};
class score:public virtual student{
    protected:
    float s;
    public:
    void getdata3(float a){
        s=a;
    }
    void putdata3(){
        cout<<"the marks obtained in sports is"<<s;
    }
};
class result:public test,public score{
    protected:
    float total;
    public:
    void display(){
    total=(test1+test2+s);
    putdata1();
    putdata2();
    putdata3();
    cout<<"net score is:"<<total<<endl;
    }
};
int main()
{
    result r1;
    r1.getdata1(1);
    r1.getdata2(10.5,11.5);
    r1.getdata3(3.50);
    r1.display();
return 0;
}