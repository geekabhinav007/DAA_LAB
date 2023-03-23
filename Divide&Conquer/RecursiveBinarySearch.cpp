#include <iostream>
using namespace std;

bool binarySearch(int arr[], int low, int high, int target)
{
    // Base Case
    if (low == high)
    {
        if (arr[low] == target)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            return true;
        }
        if (arr[mid] > target)
        {
            return binarySearch(arr, low, mid - 1, target);
        }
        else
        {
            return binarySearch(arr, mid + 1, high, target);
        }
    }
}
int main()
{
    int arr[] = {1, 2, 4, 9, 45, 89, 105, 109, 205, 505, 595, 1000};
    if (binarySearch(arr, 0, 11, 1))
    {
        cout << "Element Found" << endl;
    }
    else
    {
        cout << "Element Not Found" << endl;
    }
}
