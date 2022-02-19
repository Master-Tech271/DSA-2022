#include <iostream>
using namespace std;

/**
 * @brief 
 * 
 * space complexity => O(1)
 * best time complexity => (n^2 - n ) / 2 => O(n^2)
 * worst time complexity => (n^2 - n ) / 2 => O(n^2)
 * 
 * @param arr 
 * @param size 
 */
void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    return;
}

int main()
{
    int arr[] = {5, 4, 3, 1, 9, 8, 1, 4, 5, 1};
    int size = 10;
    cout << "after sorting -: " << endl;
    bubbleSort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}