#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char *str = "my name is sumit";
    int len= strlen(str);
    char *ptr;
    ptr=new char[len-5];
    strcpy(ptr,str);
    cout<<"ptr is:"<<ptr;
    delete ptr;
    return 0;
}