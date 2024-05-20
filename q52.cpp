#include<iostream>
#include<vector>
using namespace std;
vector<int> dis(){
    vector<int> sum;
    sum.push_back(1);
    return sum;
}


int main(){
    vector<int> vec1;
    for(int i=0;i<=10;i++){
        vec1.push_back(i);
    }
    vec1.erase(vec1.begin()+6);
    for(int i=0;i<=vec1.size();i++){
        cout<<vec1.at(i)<<endl;
    }

    vector<int> vec2;
        vec2=dis();
       for(int i=0;i<vec2.size();i++){
        cout<<vec2.at(i)<<endl;
    }

    return 0;
}

