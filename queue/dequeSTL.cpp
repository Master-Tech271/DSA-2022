#include <iostream>
#include <deque>
using namespace std;


int main(){
    deque<int> d;
    d.push_front(1);
    d.push_back(2);

    cout<< "queue Front -: " << d.front() << endl;
    cout<< "queue Back -: " << d.back() << endl;

    d.pop_front();
    cout<< "queue Front -: " << d.front() << endl;
    cout<< "queue Back -: " << d.back() << endl;
    
    d.pop_back();
    if(d.empty()){
        cout<<"deque is empty" << endl;
    }
    else{
        cout<<"deque is not empty" << endl;
    }

    return 0;
}
