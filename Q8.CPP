#include<iostream>
#include<string.h>
using namespace std;
int main()
{
char *str="my name is sumit";
int len =strlen(str);
char *ptr;
ptr=new char[len+1];
strcpy(ptr,str);
cout<<endl<<"ptr="<<ptr;
delete ptr;
return 0;
}