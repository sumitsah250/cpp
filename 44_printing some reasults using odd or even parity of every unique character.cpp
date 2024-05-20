#include<iostream>
#include<vector>
#include<string>
#include<list>
#include<map>
using namespace std;
bool check(string inp){
    for(int i=0;i<inp.size();i++){
        if(96<int(inp[i])){

        }else if(int(inp[i])<97){
            return true;
        }
    }
    return false;
}
void dispaly( list<char> &lst){
    list<char> ::iterator iter = lst.begin();
    for(int i=0;i<lst.size();i++){
            cout<<*iter<<endl;
            iter++;
    }
    cout<<endl;
}

int main(){
    vector<int> s;
    string inp;
    list<char> inp1;
    cin>>inp;
    int sum=0;
    for(int i=0;i<inp.size();i++){
        inp1.push_back(inp[i]);
    }
    inp1.unique();
    for(int i=0;i<inp1.size();i++){
        list<char> ::iterator iter = inp1.begin();
        sum=sum+*iter;
    }
    if((sum)%2 == 0){
       cout<<"CHAT WITH HER!";
    }else{
       cout<<"IGNORE HIM!";
    }
       

    
    
    return 0;
}