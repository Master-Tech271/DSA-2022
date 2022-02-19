#include <iostream>
using namespace std;

void insertionSort(int arr[], int size){
    int j = 0;
    int temp = INT_MIN;
    for(int i = 1; i < size; i++){
        j = i - 1;
        temp = arr[i];
        for(; j >= 0 && arr[j] > temp; j--){
            if(arr[j] > temp){
                arr[j + 1] = arr[j];
            }
            
        }
        arr[j + 1] = temp;        
    }
}

int main(){
    int arr[] = {10, 3, 2, 4, 1};
    int size = 5;

    insertionSort(arr, size);
    for(int i = 0; i < size; i++){
        cout<<arr[i] << " ";
    }
    cout<<endl;
}