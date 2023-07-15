#include <iostream>
using namespace std;
class BankDeposit
{
    int principle;
    int years;
    float investrate;
    float returnvalue;

    public:
    BankDeposit() {}
    BankDeposit(int p, int y, float r);
    BankDeposit(int p, int y, int r);
    void show();
};
void BankDeposit ::show()
{
    cout << "principal amount: " << principle << endl
         << "return value after" << years
         << " years is: " << returnvalue << endl;
}
BankDeposit ::BankDeposit(int p, int y, float r)
{
    principle = p;
    years = y;
    investrate = r;
    returnvalue = principle;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + investrate);
    }
}
BankDeposit ::BankDeposit(int p, int y, int r)
{
    principle = p;
    years = y;
    investrate = (float(r)/100);
    returnvalue = principle;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + investrate);
    }
}
    int main()
    {
        BankDeposit bd1, bd2, bd3;
        int p, y;
        float r;
        int R;
        cout << "enter the vealue of p ,y and r" << endl;
        cin >> p >> y >> R;
        bd1= BankDeposit(p, y, R);
        bd1.show();
        cout << "enter the vealue of p ,y and r" << endl;
        cin >> p >> y >> r;
        bd1= BankDeposit(p, y, r);
        bd1.show();


        return 0;
    }