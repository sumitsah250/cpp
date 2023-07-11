#include <iostream>
using namespace std;
class Employee
{
private:
    int a=10, b, c;

public:
    int d, e;
    void putdata(int a1, int b1, int c1); // function declaration
    int getdata()
    {
        cout << "the value of a is:" << a << endl;
        cout << "the value of b is:" << b << endl;
        cout << "the value of c is:" << c << endl;
        cout << "the value of d is:" << d << endl;
        cout << "the value of e is:" << e << endl;
    }
};
void Employee ::putdata(int a1, int b1, int c1)
{
    b = b1;
    c = c1;
}
int main()
{
    
    Employee e1,e2;
    e1.putdata(1,2,3);
    e1.getdata();
    e2.putdata(2,2,2);
    e2.getdata();

    return 0;
}