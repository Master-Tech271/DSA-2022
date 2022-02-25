#include <iostream>
using namespace std;


long long merge(int arr[], int s, int e){
    int count = 0;
    int mid = s + (e - s) / 2;
    //
    int len1 = mid - s + 1;
    int len2 = e - mid;
    //
    int *first = new int[len1];
    int *second = new int[len2];
    //
    int mainIndex = s;
    for(int i = 0; i < len1; i++){
        first[i] = arr[mainIndex++];
    }
    for(int i = 0; i < len2; i++){
        second[i] = arr[mainIndex++];
    }
    //merge with sort
    int index1 = 0, index2 = 0;
    mainIndex = s;
    while(index1 < len1 && index2 < len2){
        if(first[index1] < second[index2]){
            arr[mainIndex++] = first[index1++];
        }
        else{
            //i > j
            count += len1 - index1;
            arr[mainIndex++] = second[index2++];
        }
    }
    //
    while(index1 < len1){
        arr[mainIndex++] = first[index1++];
    }
    while(index2 < len2){
        arr[mainIndex++] = second[index2++];
    }
    delete []first;
    delete []second;
    return count;
}

long long inversionCount(int arr[], int s, int e){
    long long count = 0;
    if(s < e){
        int mid = s + (e - s) / 2;
        count += inversionCount(arr, s, mid);
        count += inversionCount(arr, mid + 1, e);

        count += merge(arr, s, e);
    }
    return count;
}

int main(){
    // int arr[] = {3, 2, 5, 4, 1, 0};
    int arr[] = {8, 4, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    long long count = inversionCount(arr, 0, size - 1);
    cout<<count<<endl;
    return 0;
}