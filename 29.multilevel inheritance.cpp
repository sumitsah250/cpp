#include<iostream>
using namespace std;
class Students{
    protected:
    int roll_number;
    public:
    void setdata(int a) ;
    void getdata(void);
};

void Students :: setdata(int a){
    roll_number=a;
}
void Students :: getdata(){
    cout<<"the roll No of the student is:"<<roll_number<<endl;
}
class Marks : public Students{
    protected:
    float m1,m2;
    public:
    void setmarks(float a,float b){
        m1=a;
        m2=b;
    }
    void getmarks(){
        cout<<"marks in math is:"<<m1<<endl
        <<"marks in science is:"<<m2<<endl;
    }
};
class Result:public Marks{
    float result;
    public:
    void display(){
        getdata();
        getmarks();
        cout<<"the percentage obtained by the student is:"<<(m1+m2)/2<<"%"<<endl;
    }
};
int main()
{
    Result s1;
    s1.setdata(1);
    s1.setmarks(90,95);
    s1.display();
return 0;
}