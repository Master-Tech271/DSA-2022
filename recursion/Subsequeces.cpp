#include <iostream>
#include <vector>
using namespace std;

void subSequences(string str, string output, int index, vector<string> &ans){
    if(index >= str.length()){
        if(output.length() > 0){
            ans.push_back(output);
        }
        return;
    }

    //exclude
    subSequences(str, output, index + 1, ans);
    //include
    char element = str[index];
    output.push_back(element);
    subSequences(str, output, index + 1, ans);
}

int main(){
    string str = "abc";
    string output = "";
    vector<string> ans;
    subSequences(str, output, 0, ans);
    int l = ans.size();
    for(int i = 0; i < l; i++){
        cout<<"\"" << ans[i] << "\"";
        if(i + 1 < l){
            cout<<", ";
        }
    }
    return 0;
}