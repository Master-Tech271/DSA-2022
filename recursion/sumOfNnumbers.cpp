#include<iostream>
using namespace std;

int sumOfN(int n){
    //f(n) = f(n) + f(n-1)
    if(n == 1){
        //base case (mandatory)
        return 1;
    }
    return n + sumOfN(n - 1);
}

int main(){
    int n;
    cout<<"Enter the number -: ";
    cin>> n;
    cout<<endl;
    int sum = sumOfN(n);
    cout<<sum << endl; 
    return 0;
}