#include <iostream>
using namespace std;
// Swap function
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partioning Function

int partioning(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low;
    int j = high - 1;

    while (j >= i)
    {

        while (arr[i] < pivot)
        {

            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i], &arr[high]);
    return i;
}

// Quick sort Function

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int j = partioning(arr, low, high);
        quickSort(arr, low, j - 1);
        quickSort(arr, j + 1, high);
    }
}

int main()
{
    int arr[] = {1, 89, 4, 5, 79, 3, 0, 45, 86, 42, 65, 8, 72};

    quickSort(arr, 0, 12);
    for (int i = 0; i < 13; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}