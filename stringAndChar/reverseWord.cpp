#include <iostream>
using namespace std;


string reverse(string str){
    int s = 0, e = str.length() - 1;
    while(s <= e){
        swap(str[s], str[e]);
        s++;
        e--;
    }
    return str;
}

string reverseWord(string str){
    string ans, temp;
    int i = 0;
    while(i <= str.length()){
        cout<<str[i] << endl;
        if(str[i] == ' ' || str[i] == '\0'){
            //reverse a previouse string
            ans.append(reverse(temp));
            if(i != (str.length() - 1)){
                ans.push_back(' ');
            }
            temp.clear();
        }
        else{
            temp.push_back(str[i]);
        }
            i++;
    }
    return ans; 
}

int main(){
    string str = "My Name is Umar";
    str = reverseWord(str);
    cout<< "Reverse a word => " << str;
    return 0;
}

/**
 * input => My Name is Umar
 * output => yM emaN si ramU
 * 
 */