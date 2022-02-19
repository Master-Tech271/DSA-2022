#include <iostream>
using namespace std;

int getLength(char ch[])
{
    int count = 0;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

void reverse(char ch[], int n)
{
    int s = 0, e = n - 1;
    while (s <= e)
    {
        swap(ch[s], ch[e]);
        s++;
        e--;
    }
}
char toLower(char c){
    if(c >= 'a' && c <= 'z'){
        return c;
    } else{
        c = c - 'A' + 'a';
        return c;
    }
}
//c -> 1 is case senstive otherwise ignore case
bool palindrome(char ch[], int n, int c)
{
    int s = 0, e = n - 1;
    while (s <= e)
    {
        if (c == 1)
        {
            if (ch[s] != ch[e])
            {
                return 0;
            }
        }
        else
        {
            //ignore case
            if (toLower(ch[s]) != toLower(ch[e]))
            {
                return 0;
            }
        }
        s++;
        e--;
    }
    return 1;
}

int main()
{
    char ch[20];
    // cout<<"Enter your name -: " << endl;
    cin >> ch;
    // ch[2] = '\0';
    int length = getLength(ch);
    // cout<<endl<<"This is your name -: " << ch << endl;
    // cout<<"Length -: " << length;
    // reverse(ch, length);
    // cout<<"Reverse Name -: "<<ch;
    cout << "palindrome Case Sensitive -: " << palindrome(ch, length, 1) << endl;
    cout << "palindrome Ignore Case -: " << palindrome(ch, length, 0);
    return 0;
}