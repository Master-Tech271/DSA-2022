#include <iostream>
using namespace std;

bool arrayIsSorted(int arr[], int size){
    if(size == 0 || size == 1){
        return true;
    }
    if(arr[0] < arr[1]){        
    arrayIsSorted(arr + 1, size - 1);
    } else{
    return false;
    }
}

int main(){
    int n;
    cout<<"Array length -: ";
    cin>>n;
    cout<<"Now Enter Array separated by space -: " << endl;
    int *arr = new int[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    //
    cout<<"okay wait, processing..." << endl;
    bool ans = arrayIsSorted(arr, n);
    if(ans){
        cout<<"Array is sorted!";
    } else{
        cout<<"Array is not sorted!";
    }
    cout<<endl;
    delete []arr;
    return 0;
}