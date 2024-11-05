#include<iostream>
#include<vector>
using namespace std;
int longestValidParentheses(string s) {
        vector<char> ans;
        vector<char> stac;
        stac.push_back('q');
        if(s!=""){
        for(int i=0;i<s.size();i++){

            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                stac.push_back(s[i]);
            }
            else if(s[i]==')' && stac.back()=='(' ){
                ans.push_back('(');
                ans.push_back(')');
                stac.pop_back();                     
            }
            else if(s[i]=='}' && stac.back()=='{'){
                 ans.push_back('{');
                ans.push_back('}');
                stac.pop_back();

            }
            else if(s[i]==']'&& stac.back()=='['){
                ans.push_back('[');
                ans.push_back(']');
                stac.pop_back();
            }
        }
        
           return ans.size();
            }
            else{
            return 0;
            
        }
    }
int main(){
    cout<<longestValidParentheses("(())")<<endl;
    cout<<longestValidParentheses("")<<endl;
    cout<<longestValidParentheses(")()())");
    return 0;
}