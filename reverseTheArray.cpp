#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(vector<int> arr, int size){
    int s = 0, e = size - 1;
    while(s <= e){
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
    return arr;
}

void print(vector<int> arr, int size){
    for(int i:arr){
        cout<< i << " ";
    }
    cout<<endl;
}

int main(){
    vector<int> arr;
    arr.push_back(11);
    arr.push_back(4);
    arr.push_back(2);
    arr.push_back(1);
    arr.push_back(9);

    int size = arr.size();
    vector<int> ans = reverse(arr, size);
    print(ans, size);

}