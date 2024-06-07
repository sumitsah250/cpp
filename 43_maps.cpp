#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
    map<string,int > marksMap;
    marksMap["sumit"] =99,3;
    marksMap["harry"]=12;
    marksMap["aaditya"]=66;
    marksMap.insert({"sumi",123});
    map<string,int>::iterator iter;
    
    for(iter=marksMap.begin();iter!=marksMap.end();iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
    
    return 0;
}