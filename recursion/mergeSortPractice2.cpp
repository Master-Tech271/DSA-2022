#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int s, int e){
    int mid = s + (e - s) / 2;
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
    //
    int index1 = 0, index2 = 0;
    mainIndex = s;
    while(index1 < len1 && index2 < len2){
        if(first[index1] < second[index2]){
            arr[mainIndex++] = first[index1++];
        } else{
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
}

void mergeToSort(vector<int> &arr, int s, int e){
    if(s >= e){
        return;
    }
    int mid = s + (e - s) / 2;
    
    mergeToSort(arr, s, mid);
    mergeToSort(arr, mid + 1, e);
	
    //
    merge(arr, s, e);
}

void mergeSort(vector<int> &arr, int n) {
    // Write your code here.
    mergeToSort(arr, 0, n - 1);
}

void print(vector<int> &arr, int n){
    cout<<endl;
    for(int i = 0; i < n; i++){
        cout<<arr[i] << " ";
    }
}

int main() {
    // Write C++ code here
    std::cout << "Hello world!";
    vector<int> arr{3, 4, 1, 6, 2, 5, 7};
    print(arr, 7);
    mergeSort(arr, 7);
    print(arr, 7);
    return 0;
}