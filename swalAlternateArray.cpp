#include <iostream>
using namespace std;

void swapAlternateArray(int array[], int size){
    for(int i = 0; i < size; i += 2){
        if(i+1 < size){
            swap(array[i], array[i+1]);
        }
    }
}

int main(){
    int array[6] = {3, 4, 2, 1, 5, 9};
    int size = 6;
    
    swapAlternateArray(array, size);
    for(int i = 0; i < size; i++){
        cout<<array[i] << " ";
    }
}