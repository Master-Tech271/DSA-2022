#include <iostream>
using namespace std;

int binarySearch(int arr[], int s, int e, int key){
    int start = s;
    int end = e;
    int mid = start + (end-start)/2;
    while(start<=end){
        if(arr[mid] == key){
            return mid;
        }
        if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int getPivotNumber(int arr[], int size){
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s)/2;
    while(s < e){
        if(arr[mid] >= arr[0]){
            s = mid + 1;
        } else{
            e = mid;
        }
        mid = s + (e - s)/2;
    }
    return s;
}

int main(){
    int arr[2] = {8, 4};
    int key = 4;
    int size = 2;
    int result;
    int pivot = getPivotNumber(arr, size);
    if(key >= arr[pivot] && key <= arr[size - 1]){
        result = binarySearch(arr, pivot, size - 1, key);
    } else{
        result = binarySearch(arr, 0, pivot - 1, key);
    }
    cout<<"result -: " << result;

    
}