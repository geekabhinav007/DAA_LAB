#include <iostream>
using namespace std;

bool binarySearch(int arr[], int size, int key)
{
    int low = 0;
    int high = size - 1;
    int mid = (low + high) / 2;
    while (high >= low)
    {
        if (arr[mid] == key)
        {
            return true;
        }
        if (arr[mid] > key)
        {
            high = mid - 1;
        }
        if (arr[mid] < key)
        {

            low = mid + 1;
        }
        mid = (low + high) / 2;
    }
    return false;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    if (binarySearch(arr, 9, 45))
    {
        cout << "Element Found" << endl;
    }
    else
    {
        cout << "Element Not Found" << endl;
    }
    return 0;
}