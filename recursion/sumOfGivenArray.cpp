#include <iostream>
using namespace std;

int findSum(int arr[], int size){
    if(size == 0){
        return 0;
    }
    int sum = arr[0];
    sum += findSum(arr + 1, size - 1);
    return sum;
}

int main(){
    int arr[] = {1, 3, 2, 4, 200, 5, 100};
    int size = sizeof(arr)/sizeof(arr[0]);
    int sum = findSum(arr, size);
    cout<<sum;
    return 0;
}