#include <iostream>
using namespace std;

void merge(int *arr, int s, int e, int divisor){
    int mid = s + (e - s) / 2;
    int i = s;
    int j = mid + 1;
    int k = s;
    while(i <= mid && j <= e){
        if(arr[i] % divisor <= arr[j] % divisor){
            arr[k] = arr[k] + ((arr[i] % divisor) * divisor); //dividend => remainder + (quotent * divisor)
            i++;
        } 
        else{
            arr[k] = arr[k] + ((arr[j] % divisor) * divisor); //dividend => remainder + (quotent * divisor)
            j++;
        }
        k++;
    }

    while(i <= mid){
        arr[k] = arr[k] + ((arr[i] % divisor) * divisor);
        k++;
        i++;
    }
    while(j <= e){
        arr[k] = arr[k] + ((arr[j] % divisor) * divisor);
        k++;
        j++;
    }
    for (int i = s; i <= e; i++)
        arr[i] = arr[i] / divisor;
}

void mergeSort(int *arr, int s, int e, int divisor){
    if(s >= e){
        return;
    }
    int mid = s + (e - s) / 2;
    mergeSort(arr, s, mid, divisor);
    mergeSort(arr, mid + 1, e, divisor);

    merge(arr, s, e, divisor);
}

int main(){
    int arr[] = {1, 4, 6, 0, 7, 2, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int divisor = 9;
    mergeSort(arr, 0, size - 1, divisor);
    for(int i = 0; i < size; i++){
        cout<<arr[i] << " ";
    }
    cout<<endl;
    return 0;
}