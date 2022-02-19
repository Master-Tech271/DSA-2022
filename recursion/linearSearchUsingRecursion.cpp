#include <iostream>
using namespace std;

bool findTarget(int arr[], int size, int k){
    if(size == 0){
        return false;
    }
    if(arr[0] == k){
        return true;
    }
    return findTarget(arr + 1, size - 1, k);
}

int main(){
    int k = 5;
    int arr[] = {3, 4, 6, 7, 5, 8, 9, 0};
    int size = sizeof(arr)/ sizeof(arr[0]);
    bool ans = findTarget(arr, size, k);
    cout<<ans;    
    return 0;
}