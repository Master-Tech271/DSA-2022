#include <iostream>
using namespace std;

void sortZeroOne(int array[], int size){
    int left = 0, right = size - 1;
    while(left<right){
        while(array[left] == 0 && left < right){
            left++;
        }
        while(array[right] == 1 && left < right){
            right--;
        }
        if(left < right){
            swap(array[left], array[right]);
            left++;
            right--;
        }
    }
}

void printArray(int array[], int size){
    for(int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
}

int main(){
    int array[] = {0, 1, 1, 0, 1, 1, 0, 1, 0, 1, 1, 0, 0, 0, 0};
    int size = 15;
    sortZeroOne(array, size);

    printArray(array, size);
}