#include<iostream>
using namespace std;
class Time{
    int hr,mi;
    public:
    Time(int h=0,int m=0){
        hr=h;
        mi=m;
    }
    Time operator +(Time t1){
       Time temp;
        int x;
        x=hr*60+mi+t1.hr*60+t1.mi;
        temp.hr=x/60;
        temp.mi=x%60;
        return temp;
    }
    void inline display(){
        cout<<"the time is:"<<hr<<"hour"<<mi<<"minute"<<endl;
    }
};
int main()
{
    Time t1(10,50),t2(5,20);
    Time t3=t1+t2; 
    t1.display();
    t2.display(); 
    t3.display();
return 0;
}