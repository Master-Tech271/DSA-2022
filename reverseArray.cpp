#include <iostream>
using namespace std;

void reverseArray(int array[], int size){
    int start = 0;
    int end = size -1;
    int temp = 0;
    while(start<=end){
        temp = array[start];
        array[start] = array[end];
        array[end] = temp;
        start++;
        end--;
    }
}

int main(){
    int array[6] = {4, 3, 2, 1, 5, 90};
    int size = 6;
    reverseArray(array, size);
    for(int i = 0; i < size; i++){
        cout<< array[i] << " ";
    }
}