#include <iostream>
using namespace std;

int getPivotNumber(int arr[], int size){
    int ans = -1;
    int leftSum = 0;
    int rightSum = 0;
    //time complexity -> O(n) * O(n) => On^2
    for(int i = 0; i < size; i++){
        //left side
        for(int j = 0; j < i; j++){
            leftSum += arr[j];    
        }
        //right side
        for(int k = i + 1; k < size; k++){
            rightSum += arr[k];
        }
        if(leftSum == rightSum){
            ans = i;
            break;
        }
        leftSum = rightSum = 0;
    }
    return ans;
}
//time complexity => On + On => On
int getPivotNumberWithOptimized(int arr[], int size){
    int ans = -1;
    int leftSum = 0;
    int rightSum = 0;
    //time complexity -> O(n)
    for(int i = 0; i < size; i++){
        rightSum += arr[i];
    }
    for(int i = 0; i < size; i++){
        rightSum -= arr[i];
        if(rightSum == leftSum){
            return i;
        }
        leftSum += arr[i];
    }
    return ans;
}

int main(){
    int arr[] = {1, 7, 3, 6, 5, 6};
    // int arr[] = {1,2,3};
    // int arr[] = {2,1,-1};
    cout<<" result -: " << getPivotNumberWithOptimized(arr, 6);
}