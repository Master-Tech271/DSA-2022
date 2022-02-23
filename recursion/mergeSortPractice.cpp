#include <iostream>
using namespace std;

void merge(int arr[], int s, int e){
    int mid = s + (e - s) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int mainIndexArray = s;
    int index1 = 0;
    int index2 = 0;
    int temp = 0;
    while(index1 < len1 && index2 < len2){
        if(arr[index1] < arr[index2]){
            index1++;
        }else{
            temp = arr[index1];
            arr[index1++] = arr[index2];
            arr[index2++] = temp;
        }
    }
    while(index1 < len1){
        arr[index1] = arr[index1++];
    }
}


void mergeSort(int arr[], int s, int e){
    if(s >= e){
        return;
    }
    int mid = s + (e - s) / 2;

    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);

    //join with sort
    merge(arr, s, e);
}


int main(){
    int arr[] = {6, 7, 8, 0, 1, 3, 23, 90};
    int size = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr, 0, size - 1);
    for(int i = 0; i < size; i++){
        cout<<arr[i] << " ";
    }
    cout<<endl;
    return 0;
}