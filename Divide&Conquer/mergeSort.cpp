#include <iostream>
using namespace std;

void merge(int A[], int start, int mid, int end)
{
    int p = start, q = mid + 1;

    int Arr[end - start + 1], k = 0;

    for (int i = start; i <= end; i++)
    {
        if (p > mid) // checks if first part comes to an end or not .
            Arr[k++] = A[q++];

        else if (q > end) // checks if second part comes to an end or not
            Arr[k++] = A[p++];

        else if (A[p] < A[q]) // checks which part has smaller element.
            Arr[k++] = A[p++];

        else
            Arr[k++] = A[q++];
    }
    for (int p = 0; p < k; p++)
    {
        /* Now the real array has elements in sorted manner including both
             parts.*/
        A[start++] = Arr[p];
    }
}

void mergeSort(int arr[], int low, int high)
{

    if (low < high)
    {
        int mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

int main()
{

    int arr[] = {1, 89, 4, 5, 79, 3, 0, 45, 86, 42, 65, 8, 72};
    mergeSort(arr, 0, 12);
    for (int i = 0; i < 13; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}