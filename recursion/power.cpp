#include <iostream>
using namespace std;

int power(int a, int b){
    if(b == 0){
        return 1;
    }
    if(b == 1){
        return a;
    }
    int ans = power(a, b/2) * power(a, b/2);
    if(b & 1){
        //odd
        ans = a * ans;
    }
    return ans;
}

int main(){
    int a = 3;
    int b = 11;
    int result = power(a, b);
    cout<<result;
}