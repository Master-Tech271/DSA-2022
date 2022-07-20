#include<iostream>
#include<stack>
using namespace std;


int main(){
    string str = "hello";
    
    stack<char> s;

    for(int i = 0; i < str.length(); i++){
        char ch = str[i];
        s.push(ch);
    }

    string ans;

    while(!s.empty()){
        char ch = s.top();
        s.pop();
        ans.push_back(ch);
    }

    cout<<"Reverse String -: " << ans;
}