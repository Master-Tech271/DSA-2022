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
void selectionSort(int arr[], int size)
{
    int min_index = 0;
    for (int i = 0; i < size - 1; i++)
    {
        min_index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        swap(arr[i], arr[min_index]);
    }
    return;
}

int main()
{
    int arr[] = {5, 4, 3, 1, 9, 8, 1, 4, 5, 1};
    int size = 10;
    cout << "after sorting -: " << endl;
    selectionSort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}