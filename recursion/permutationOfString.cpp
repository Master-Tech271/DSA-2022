#include <iostream>
#include <vector>
using namespace std;

void permutation(string str, vector<string> &ans, int i){
    //base case
    if(i >= str.length()){
        ans.push_back(str);
        return;
    }

    for(int j = i; j < str.length(); j++){
        swap(str[i], str[j]);
        permutation(str, ans, i + 1);
        //backtracking
        swap(str[i], str[j]);
    }

}

int main(){

    string str = "abc";
    vector<string> ans;
    permutation(str, ans, 0);
    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i] << " ";
    }
    cout<<endl;
    return 0;
}