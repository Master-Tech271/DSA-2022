#include <iostream>
using namespace std;

void merging(int arr[], int s, int e){
    int mid = s + (e - s) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int mainArrayIndex = s;
    //copy values
    for(int i = 0; i < len1; i++){
        first[i] = arr[mainArrayIndex++];
    }
    mainArrayIndex = mid + 1;
    for(int i = 0; i < len2; i++){
        second[i] = arr[mainArrayIndex++];
    }

    //merge with sort
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;
    while(index1 < len1 && index2 < len2){
        if(first[index1] < second[index2]){
            arr[mainArrayIndex++] = first[index1++];
        } 
        else{
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    while(index1 < len1){
        arr[mainArrayIndex++] = first[index1++]; 
    }
    while(index2 < len2){
        arr[mainArrayIndex++] = second[index2++];
    }
    delete []first;
    delete []second;
}

void mergeSort(int arr[], int s, int e){
    if(s >= e){
        return;
    }
    int mid = s + (e - s) / 2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);
    merging(arr, s, e);
}

void merge(int arr1[], int arr2[], int n, int m){
    int i = n - 1;
    int j = 0;
    while(i >= 0 && j < m){
        if(arr1[i] > arr2[j]){
            swap(arr1[i], arr2[j]);
        }
        i--;
        j++;
    }
    mergeSort(arr1, 0, n - 1);
    mergeSort(arr2, 0, m - 1);
}

int main(){
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {0, 2, 6, 8, 9};
    int n = 4, m = 5;
    merge(arr1, arr2, n, m);
    for(int i = 0; i < n; i++){
        cout<<arr1[i] << " ";
    }
    for(int i = 0; i < m; i++){
        cout<<arr2[i] << " ";
    }
    cout<<endl;
    return 0;
}