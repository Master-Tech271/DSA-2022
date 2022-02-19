#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int answer = 0, i = 0;
    //101 -> 5

    while (n != 0)
    {
        int digit = n % 10;

        if (digit == 1)
        {
            answer = pow(2, i) + answer;
        }
        i++;
        n = n / 10;
    }

    cout << "\nDecimal -:" << answer << endl;
}