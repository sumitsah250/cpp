#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int divide(int dividend, int divisor) {
        long dividend1=long(dividend);
        long divisor1=long(divisor);
             double compare=double((long(dividend1/divisor1)+long(dividend1/divisor1+1))/2);
        if((dividend1>=0 && divisor1>=0) || (dividend1<=0 && divisor1<=0)){
             if(double(long(dividend1/divisor1))<compare){
            return (long(dividend1/divisor1+1));
        }else{
            return long(dividend1/divisor1);
        }
        cout<<"here";
            }

            else{
             if(double((long(dividend1/divisor1)))>=compare){
            return (long(dividend1/divisor1+1));
        }else{
            return long(dividend1/divisor1);
        }
        }
       
        
    }
};

int main(){
    cout<<"welcome";
    Solution s1;
    cout<<s1.divide(-2147483648,-1);

    return 0;
}