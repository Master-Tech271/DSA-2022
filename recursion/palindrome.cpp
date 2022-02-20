#include <iostream>
using namespace std;

bool palindromeOrNot(string str, int i, int j){
    if(i > j){
        return true;
    }
    if(str[i] != str[j]){
        return false;
    }
    i++;
    j--;
    return palindromeOrNot(str, i, j);
}

int main(){
    string str = "abceecba";
    bool result = palindromeOrNot(str, 0, str.length() - 1);
    if(result){
        cout<<"Yes, it is Palindrome";
    }else{
        cout<<"No, it is Palindrome";
    }    
    return 0;
}