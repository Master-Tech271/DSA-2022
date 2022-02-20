#include <iostream>
using namespace std;

// void insertionSort(int arr[], int n){
//     for(int i = 1; i < n; i++){
//         int j = i - 1;
//         int temp = arr[i];
//         while(j >= 0){
//             if(arr[j] > temp){
//                 arr[j + 1] = arr[j]; //shift
//             }else{
//                 break;
//             }
//             j--;
//         }
//         arr[j + 1] = temp;
//     }
// }

void insertionSort(int arr[], int n){
    if(n == 1 || n == 0){
        return;
    }
    insertionSort(arr, n - 1);
    int temp = arr[n - 1];
    int j = n - 2;
    while(j >= 0 && arr[j] > temp){
        if(arr[j] > temp){
            arr[j + 1] = arr[j];
        }
        j--;
    }
    arr[j + 1] = temp;
}


int main(){
    int arr[] = {4, 3, 2, 1, 8, 90, 65, 1, 9, 0, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, size);
    for(int i = 0; i < size; i++){
        cout<<arr[i] << " ";
    }
    return 0;
}