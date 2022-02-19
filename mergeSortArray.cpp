#include<iostream>
using namespace std;

void mergeSortArray(int arr1[], int n, int arr2[], int m, int arr3[]){
    int i = 0, j = 0, k = 0;
    while(i < n && j < m){
        if(arr1[i] < arr2[j]){
            arr3[k++] = arr1[i++];
        } else{
            arr3[k++] = arr2[j++];
        }
    }
    //copy remaining array
    while(i < n){
        arr3[k++] = arr1[i++];
    }
    while(j < m){
        arr3[k++] = arr2[j++];
    }
}

void print(int arr[], int n){
    cout<<endl;
    for(int i = 0; i < n; i++){
        cout<< arr[i] << " ";
    }
    cout<<endl;
}

int main(){
    int arr1[5] = {3, 4, 6, 9, 11};
    int arr2[4] = {0, 1, 8, 9};
    int arr3[8];
    int size = 8;
    mergeSortArray(arr1, 5, arr2, 4, arr3);
    print(arr3, size);
}