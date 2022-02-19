#include <iostream>
using namespace std;

void printReverseUpToN(int n){
    //f(n) = f(n - 1);
    if(n == 0){
        return;
    }
    cout << n << " ";
    printReverseUpToN(n - 1);
}

int main(){
    int n;
    cout<<"enter n -: ";
    cin>>n;
    cout<<endl;
    printReverseUpToN(n);    
    return 0;
}