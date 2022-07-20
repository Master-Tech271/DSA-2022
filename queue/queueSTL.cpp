#include <iostream>
#include <queue>
using namespace std;


int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    cout<<"queue Front -: " << q.front() << endl;
    q.pop();
    cout<<"queue Front after 1 pop -: " << q.front() << endl;
    q.pop();
    if(q.empty()){
        cout<<"queue is empty" << endl;
    }
    else{
        cout<<"queue is not empty" << endl;
    }
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;

}