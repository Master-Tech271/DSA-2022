#include <iostream>
using namespace std;

void reverse(string& str, int i, int n){
    if(i > (n - i -1)){
        return;
    }
    swap(str[i], str[(n - i - 1)]);
    i++;
    reverse(str, i, n);
}

int main(){
    string str = "abcde";
    reverse(str, 0, str.length());
    cout<<str;
}