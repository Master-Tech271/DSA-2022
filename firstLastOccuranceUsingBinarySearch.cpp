#include <iostream>
using namespace std;

int firstOccurance(int arr[], int size, int k){
    int ans = -1;

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while(start<=end){
        if(arr[mid] == k){
            ans = mid;
            end = mid - 1;
        }
        else if(k > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }

    return ans;
}

int lastOccurance(int arr[], int size, int k){
    int ans = -1;

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while(start<=end){
        if(arr[mid] == k){
            ans = mid;
            start = mid + 1;
        }
        else if(k > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }

    return ans;
}

int main(){
    int arr[5] = {1, 3, 3, 3, 8};

    cout<<"first occurance of 3 at index -: " << firstOccurance(arr, 5, 3) << endl;
    cout<<"last occurance of 3 at index -: " << lastOccurance(arr, 5, 3) << endl;
}