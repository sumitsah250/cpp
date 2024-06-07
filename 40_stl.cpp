#include<iostream>
#include<vector>
using namespace std;
template<class T>
void display(vector<T> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}
int main(){
    vector<float> vec1;
    float element;
    int size;
    cout<<"enter the size of the vector"<<endl;
    cin>>size;

    for(int i=0;i<size;i++){
        cout<<"enter the element to add to this vector"<<endl;
        cin>>element;
        vec1.push_back(element);
    }
    // vec1.pop_back();
    display(vec1);
    vector<float> :: iterator iter = vec1.begin();
    vec1.insert(iter+1,566);


    
    // display(vec1);
    // string s= 12+"";
    vector<int> s = {1,2,3,4,5,4,1,3,2};
    display(s);
    s.erase(2);
    display(s);
    


    return 0;
}