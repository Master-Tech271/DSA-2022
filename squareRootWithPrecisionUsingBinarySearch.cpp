#include <iostream>
using namespace std;

int findSqrtNumber(int n){
    int start = 0;
    int end = n;
    int mid = start + (end - start) / 2;
    long long int square = 0;
    int ans = -1;
    while(start <= end){
        square = mid * mid;
        if(square == n){
            return mid;
        }
        else if(square < n){
            ans = mid;
            start = mid + 1;
        } else{
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

double getPreicison(int ans, int precision, int n){
    double factor = 1;
    double temp = ans;
    for(int i = 0; i < precision; i++){
        factor = factor/10;
        for(double j = temp; j*j < n; j += factor){
            temp = j;
        }
    }
    return temp;
}

int main(){
    int n;
    cout<<"Enter a number to find out the square root number -: ";
    cin>>n;

    int sqrtNumber = findSqrtNumber(n);
    double result = getPreicison(sqrtNumber, 2, n);
    cout<<"\nResult -: " << result << endl;

}