#include<iostream>
using namespace std;
template< typename t1=int,typename t2=float,typename t3=char>
t2 sum( t1 a,t2 b, t3 c){
    return(a+b+c);

}

int main()
{
    int a=10,c=10;
    cout<<sum(a,10.1,c);
return 0;
}