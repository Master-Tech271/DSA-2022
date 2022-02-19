#include <iostream>
using namespace std;

int findPower(int a, int power){
    int res = 1;
    while(power > 0){
        if(power & 1){
            //odd
            res = res * a;
        }
        a = a * a;
        power = power >> 1;
    }
    return res;
}

int main(){
    int a = 2;
    int power = 5;

    int result = findPower(a, power);
    cout<<result<<endl;
}