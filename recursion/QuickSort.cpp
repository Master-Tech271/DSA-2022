#include <iostream>
using namespace std;

int partition(int arr[], int s, int e){
    int pivot = arr[s];
    //count
    int count = 0;
    for(int i = s + 1; i <= e; i++){
        if(arr[i] <= pivot){
            count++;
        }
    }
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);
    
    //ensure, pivot left part is smaller and right part is greater
    int i = s, j = e;
    while(i < pivotIndex && j > pivotIndex){
        while(arr[i] <= pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }
        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int s, int e){
    if(s >= e){
        return;
    }
    int p = partition(arr, s, e);
    quickSort(arr, s, p - 1);
    quickSort(arr, p + 1, e);
}

int main(){
    int arr[] = {1, 3, 5, 6, 0, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, size - 1);
    //
    for(int i = 0; i < size; i++){
        cout<<arr[i] << " ";
    }
    cout<<endl;
}