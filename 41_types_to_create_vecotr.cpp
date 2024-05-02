#include<iostream>
#include<vector>
using namespace std;
template<class T>
void display(vector<T> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<float> vec1; //  zero length vecor
    vector<char> vec2(3);// 4 element character vector
    vec2.push_back('5');
    // display(vec2);
    vector<char> vec3(vec2);
    display(vec3);
    // vector<int> vec4(7,5);
    display(vec4);
    






    return 0;
}