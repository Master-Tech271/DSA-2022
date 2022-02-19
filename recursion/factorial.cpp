#include <iostream>
using namespace std;

int printFactorial(int n){
    //f(n) = f(n) * f(n - 1);
    if(n == 1){
        return 1;
    }
    return n * printFactorial(n-1);
}

int main(){
    int n;
    cout<<"Enter factorial number -: ";
    cin>>n;
    cout<<endl;
    int answer = printFactorial(n);
    cout<<answer;
    return 0;
}