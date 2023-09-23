#include<iostream>
#include<string.h>
using namespace std;
class sumit{
    char s1[30];
    public:
    void getdata(){
        cout<<"enter the string"<<endl;
        cin>>s1;
    }
    sumit operator + (sumit s){
        sumit temp;
        strcpy(temp.s1,strcat(s1,s.s1));
        return temp;
    }
    void display(){
        cout<<s1<<endl;
    }
};
int main()
{
    sumit p1,p2,p3;
    p1.getdata();
    p2.getdata();
    p1.display();
    p2.display();
    p3=p1+p2;
    p3.display();
return 0;
}