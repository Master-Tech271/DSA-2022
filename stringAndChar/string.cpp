#include <iostream>
using namespace std;

int main(){
    string str;
    cout<<"string size = " << str.size() << endl;
    cout<<"string = " << str << endl;
    str.push_back('\0');
    cout<<"string = " << str << endl;
    if(str[str.size() - 0] == '\0'){
        cout<<"string contains null terminator \0" << endl;
    }
    cout<<"string size = " << str.size() << endl;
    str.append("Umar");
    str.push_back('\0');
    str.append("Umar");
    cout<<"string = " << str << endl;
    cout<<"string size = " << str.size() << endl;
    cout<<"string size = " << str.length() << endl;
    return 0;
}