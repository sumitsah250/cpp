#include<iostream>
#include<string.h>
using namespace std;
class Binary{
 string s;
     void check_bin();

 public:
 void take_bin();

 void ones_complement();
 void display_bin();
};
void Binary::  take_bin(){
    cout<<"enter a binary number:"<<endl;
    cin>>s;
    check_bin();
}
void Binary:: check_bin(){
    for(int i=0 ; i<s.length();i++){
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"not a binary format"<<endl;
            break;
        }
    }
}
void Binary :: ones_complement(){
    for(int i=0; i < s.length();i++){
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
        else if( s.at(i)=='1'){
            s.at(i)='0';
        }
    }
}
void Binary :: display_bin(){
    cout<<"displaying the binary"<<s<<endl;;
}

int main()
{
    class Binary b1;
    b1.take_bin();
    b1.display_bin();
    b1.ones_complement();
    b1.display_bin();
return 0;
}