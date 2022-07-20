#include <iostream>
using namespace std;


bool solve(int i, string& str, string& str2, string subStr)
{
    if(i == str.size()) {return true;}
    if(str == subStr) return true;

    //split
    int splitIndex = 0;
    subStr.push_back(str2[splitIndex]);
    //wihtout swao
    solve(i + 1, str, str2);

}

int main()
{

}