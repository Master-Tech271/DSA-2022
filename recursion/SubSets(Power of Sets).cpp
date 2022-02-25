#include <iostream>
#include <vector>
using namespace std;

void powerSets(vector<int> arr, int index, vector<int> output, vector<vector<int>> &ans){
    if(index >= arr.size()){
        ans.push_back(output);
        return;
    }
    //exclude
    powerSets(arr, index  + 1, output, ans);

    //include
    int element = arr[index];
    output.push_back(element);
    powerSets(arr, index + 1, output, ans);
}

int main(){
    vector<int> arr({1, 2, 3});
    vector<int> output;
    vector<vector<int>> ans;
    powerSets(arr, 0, output, ans);
    int row = ans.size();
    int col = 0;
    for(int i = 0; i < row; i++){
        cout<<"[";
        col = ans[i].size();
        for(int j = 0; j < col; j++){
            cout<<ans[i][j];
            if(j + 1 < col){
                cout<<",";
            }
        }
        cout<<"]";
        cout<<" ";
    }
    cout<<endl;
}