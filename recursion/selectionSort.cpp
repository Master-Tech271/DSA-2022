#include <iostream>
using namespace std;

void selectionSort(int *arr, int n){
    if(n == 0 || n == 1){
        return;
    }
    int minIndex = 0;
    for(int i = 0; i < n; i++){
        minIndex = i;
        for(int j = i; j < n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
    selectionSort(arr + 1, n - 1);
}

int main(){
    int arr[] = {1, 4, 7, 4, 2, 6, 7, 98};
    int size = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, size);
    for(int i = 0; i < size; i++){
        cout<<arr[i] << " ";
    }
    return 0;
}