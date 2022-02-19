#include <iostream>
using namespace std;

bool isPossible(int arr[], int size, int mid, int painter)
{
    int sum = 0;
    int k = 1;
    for (int i = 0; i < size; i++)
    {
        if (sum + arr[i] <= mid)
        {
            sum += arr[i];
        }
        else
        {
             k++;
            if (k <= painter && arr[i] <= mid)
            {
                sum = arr[i];
            } else{
                return false;
            }
        }
    }
    return true;
}

int main()
{
    // int arr[] = {5, 5, 5, 5};
    // int arr[] = {10, 20, 30, 40};
    int arr[] = {1, 2, 3, 4};
    int painter = 2;
    int size = 4;
    int s = 0;
    int e = 0;
    for (int i = 0; i < size; i++)
    {
        e += arr[i];
    }

    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (isPossible(arr, size, mid, painter))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            //no solution so, we can move forward of that mid
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    cout << ans;
}