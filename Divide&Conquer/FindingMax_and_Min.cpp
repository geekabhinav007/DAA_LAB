#include <iostream>
#include <algorithm>
using namespace std;

// Function to find the minimum and maximum in an array using divide and conquer
void find_min_max(int arr[], int left, int right, int minmax[]) {
    if (left == right) {
        // Only one element in the array
        minmax[0] = arr[left];
        minmax[1] = arr[left];
        return;
    }
    if (right == left + 1) {
        // Two elements in the array
        if (arr[left] < arr[right]) {
            minmax[0] = arr[left];
            minmax[1] = arr[right];
        }
        else {
            minmax[0] = arr[right];
            minmax[1] = arr[left];
        }
        return;
    }
    // More than two elements in the array
    int mid = (left + right) / 2;
    int left_minmax[2], right_minmax[2];
    find_min_max(arr, left, mid, left_minmax);
    find_min_max(arr, mid+1, right, right_minmax);
    minmax[0] = min(left_minmax[0], right_minmax[0]);
    minmax[1] = max(left_minmax[1], right_minmax[1]);
}

// Driver code
int main() {
    int arr[] = {5, 7, 2, 9, 1, 8, 3, 6, 4 , 0 , 101};
    int n = sizeof(arr) / sizeof(arr[0]);
    int minmax[2];
    find_min_max(arr, 0, n-1, minmax);
    cout << "Minimum value: " << minmax[0] << endl;
    cout << "Maximum value: " << minmax[1] << endl;
    return 0;
}
