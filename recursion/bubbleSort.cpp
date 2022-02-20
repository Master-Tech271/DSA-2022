#include <iostream>
using namespace std;

void bubbleSort(int *arr, int n){
    if(n == 0 || n == 1){
        //already sorted
        return;
    }
    for(int i = 0;  i < n - 1; i++){
        if(arr[i] > arr[i + 1]){
            swap(arr[i], arr[i + 1]);
        }
    }
    bubbleSort(arr, n - 1);
}

int main(){
    int arr[] = {1, 14, 5, 48, 91, 0, 1, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
   // bubbleSort(arr, size);
    for(int i = 0; i < size; i++){
        cout<<arr[i]<< " ";
    }
    return 0;
}