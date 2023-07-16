#include<iostream>
using namespace std;
class Employee{
   public:
   int id;
   float salary;
   Employee(int id1){
    id=id1;
    salary=10000;
   }
   Employee(){};
};
class Programmer :public Employee{
    public:
    string name="sumit"; 
    Programmer(int s){
       id=s;
    }
    void getdata(){
        cout<<"calling from the function:";
        cout<<id<<endl;
    }
};
int main()
{
    Employee e1(001),e2(002);
    cout<<"the employee id is:"<<e1.id<<endl;
    cout<<"the employee salary is:"<<e1.salary<<endl;
    Programmer p1(10);
    cout<<"name of programmer is:"<<p1.name<<endl;
    cout<<p1.id<<endl;
    p1.getdata();


return 0;
}