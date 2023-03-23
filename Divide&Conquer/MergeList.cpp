// Merge 2 Sorted List to get a Sorted List.

#include <iostream>
using namespace std;

void merge(int arr1[], int arr2[], int m, int n)
{
    int size = m + n;
    int result[size];
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
        {
            result[k++] = arr1[i++];
        }
        else
        {
            result[k++] = arr2[j++];
        }
    }

    for (; i < m;)
    {
        result[k++] = arr1[i++];
    }
    for (; j < n;)
    {
        result[k++] = arr2[j++];
    }
}


int main()
{
    int arr1[] = {1, 4, 5, 9, 12, 16, 89, 100};
    int arr2[] = {2, 11, 25, 99, 112, 116, 189, 1000, 45896, 99999};
   
    return 0;
}