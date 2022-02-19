#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
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

int main(){
    int evenArray[6] = {4, 7, 8, 9, 18, 23};
    int oddArray[5] = {2, 4, 5, 8, 19};

    int evenIndex = binarySearch(evenArray, 5, 9);
    cout<< "Even Index of 19 is -: " << evenIndex << endl;

    int oddIndex = binarySearch(oddArray, 5, 5);
    cout<< "Odd Index of 19 is -: " << oddIndex;
    return 0;
}