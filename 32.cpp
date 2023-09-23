#include <iostream>
using namespace std;
class SimpleCalculator
{
public:
    int a, b, c, d, n;
    SimpleCalculator()
    {
        cout << "enter the operation you want to perform:" << endl;
        cout << "1 for addition" << endl;
        cout << "2 for subraction" << endl;
        cout << "3 for multiplication" << endl;
        cout << "4 for division" << endl;
    }
    void Addition(),Subtraction(),Multiplication(),Division();
    void operation(int k)
    {
        n = k;
        switch (n)
        {
        case 1:
            Addition();
            break;
        case 2:
            Subtraction();
            break;

        case 3:
            Multiplication();
            break;

        case 4:
            Division();
            break;
        default:
            cout << "the operation is invalid" << endl;
            break;
        }
    }
};
void SimpleCalculator :: Addition(){
    cout<<"enter the value of a and b"<<endl;
    cin>>a>>b;
    cout<<"addition of "<<a<<"and "<<b<<" is"<<a+b<<endl;
}
void SimpleCalculator ::Subtraction(){
    cout<<"enter the value of a and b"<<endl;
    cin>>a>>b;
    cout<<"subtraction of "<<a<<"and "<<b<<" is"<<a-b<<endl;
}
void SimpleCalculator :: Multiplication(){
    cout<<"enter the value of a and b"<<endl;
    cin>>a>>b;
    
    cout<<"multiplication of "<<a<<"and "<<b<<" is"<<a*b<<endl;
}
void SimpleCalculator :: Division(){
     cout<<"enter the value of a and b"<<endl;
    cin>>a>>b;
   
    cout<<"division of "<<a<<"and "<<b<<" is"<<a+b<<endl;
}
int main()
{
    SimpleCalculator s1;
    cin>>s1.n;
    s1.operation(s1.n);
    return 0;
}