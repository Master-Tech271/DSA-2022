#include <iostream>
using namespace std;

bool isPossible(int arr[], int size, int k, int mid){
    int lastPos = arr[0];
    int cow = 1;
    for(int i = 0; i < size; i++){
        if(arr[i] - lastPos >= mid){
            cow++;
            if(cow == k){
                return true;
            }
            lastPos = arr[i];
        }
    }
    return false;
}

int main(){
    int arr[] = {1, 2, 3, 4, 6};
    int size = 5;
    int cows = 2;
    int s = 0;
    int e = INT_MIN;
    for(int i = 0; i < size; i++){
        if(arr[i] > e){
            e = arr[i];
        }
    }
    int mid = s + (e - s) / 2;

    int ans = -1;
    while(s <= e){
        if(isPossible(arr, size, cows, mid)){
            ans = mid; 
            s = mid + 1;
        } else{
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    cout<<ans<<endl;
}