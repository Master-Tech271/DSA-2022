#include <iostream>
using namespace std;

int main(){
    int array[] = {1, 2, 3, 1, 2, 3};
    int size = 6;
    int key = 6;

    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++){
            for(int k = j + 1; k < size; k++){
                if(array[i] + array[j] + array[k] == key){
                    cout<<" Tripplet is -: " << array[i] << " " << array[j] << " " << array[k];
                    i = size;
                    break;
                }
            }
        }
    }
}