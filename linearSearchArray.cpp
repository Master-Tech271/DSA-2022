#include <iostream>
using namespace std;

bool search(int array[], int size, int element){

    for(int i = 0; i < size; i++){
        if(array[i] == element){
            return true;
        }
    }

    return false;
}

int main(){
    int array[] = {10, 5, 4, 3, 2};
    int size = 5;
    int find = 30;

    if(search(array, size, find)){
        cout<<"Element Found in Array!";
    } else{
        cout<<"Element Not Found in Array!";
    }
}