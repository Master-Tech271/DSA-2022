#include <iostream>
using namespace std;

bool findTarget(int arr[], int start, int end, int k){
    if(start <= end){
        int mid = start + (end - start) / 2;

    if(arr[mid] == k){
        return true;
    } else if(arr[mid] > k){
        return findTarget(arr, start, mid - 1, k);
    } else{
        return findTarget(arr, mid + 1, end, k);
    }     
    }  
    return false;  
}

int main(){
    int arr[] = {1, 3, 5, 6, 78, 90};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 718;
    bool ans = findTarget(arr, 0, size - 1, target);
    cout<<ans<<endl;
    return 0;
}