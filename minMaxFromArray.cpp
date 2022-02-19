#include <iostream>
using namespace std;


int getMax(int array[], int size){
    int max = INT_MIN;
    for(int i = 0; i < size; i++){
        if(array[i] > max){
            max = array[i];
        }
    }
    return max;
}

int getMin(int array[], int size){
    int min = INT_MAX;
    for(int i = 0; i < size; i++){
        if(array[i] < min){
            min = array[i];
        }
    }
    return min;
}

int main(){

    int n;
    cout<<"Enter an 10 element in array " << endl;
    int array[10] = {0};

    for(int i = 0; i < 10; i++){
        cin>>array[i];
    }

    cout<<"\n Max Number in Array is -: " << getMax(array, 10);
    cout<<"\n Minimum Number in Array is -: " << getMin(array, 10);

}