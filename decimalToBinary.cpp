#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int answer = 0, i = 0;
    //5 -> 101

    while (n != 0)
    {
        int bit = n & 1;
        answer = bit * pow(10, i) + answer;
        n = n >> 1; //right sift by 1
        i++;
    }
    cout << "\n Binary -:" << answer << endl;
}