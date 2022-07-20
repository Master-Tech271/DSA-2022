#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> s;
    s.push(10);
    s.push(11);

    while(!s.empty()){
        cout<<s.top() << " ";
        s.pop();
    } 
    return 0;
}

