#include<iostream>
using namespace std;
class sumit{
    int count;
    public:
    sumit(int i=0){
        count=i;
    }
    void display(){
        cout<<"the value of count is:"<<count<<endl;
    }
    void operator ++ (){
        count++;
    }
     int operator ++(int){
        int temp=count;
        count++;
        return temp;
    }
   
};
int main()
{
sumit s1(10),s2(20);
s1.display();
s1++;
s1.display();
s2.display();
++s2;
s2.display();
s2.display();
return 0;
}