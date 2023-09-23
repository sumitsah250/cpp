#include <iostream>
using namespace std;
class Student
{
public:
    int roll_no;
    void setroll(int r)
    {
        roll_no = r;
    }
    void getroll()
    {
        cout << "the roll number of the student is:" << roll_no << endl;
    }
};
class Marks : virtual public Student
{
public:
    float math;
    float oop;
    void setmarks(float m, float o)
    {
        math = m;
        oop = o;
    }
    void display();
};
void Marks ::display()
{
    cout << "the marks in math is:" << math <<endl
         << "marks in oop is:" << oop << endl;
}
class Sports :virtual public Student
{
public:
    float sports_marks;
    void setsportmark(float s)
    {
        sports_marks = s;
    }
    void Displaysport(){
        cout<<"the score in sports is:"<<sports_marks<<endl;
    }
};
class Result:public Marks, public Sports{
    public:
    float result;
    void setresult(){
      result= math +oop+sports_marks;
    }
    void getdata(){
        getroll();
        display();
        Displaysport();
        
        cout<<"total marks obtained:"<<result<<endl;
    }
};

int main()
{
    Result r1;
    r1.setroll(44);
    r1.setmarks(95.0,99.0);
    r1.setsportmark(92.0);
     r1.setresult();
    r1.getdata();
   
    return 0;
}