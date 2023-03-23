//  Find minimum and maximum in an array using minimum number of comparisons divide and conquer

#include <iostream>
#include <algorithm>
using namespace std;

// Function to find the minimum and maximum in an array using divide and conquer
pair<int, int> find_min_max(int arr[], int left, int right) {
    pair<int, int> minmax;
    if (left == right) {
        // Only one element in the array
        minmax.first = arr[left];
        minmax.second = arr[left];
        return minmax;
    }
    if (right == left + 1) {
        // Two elements in the array
        if (arr[left] < arr[right]) {
            minmax.first = arr[left];
            minmax.second = arr[right];
        }
        else {
            minmax.first = arr[right];
            minmax.second = arr[left];
        }
        return minmax;
    }
    // More than two elements in the array
    int mid = (left + right) / 2;
    pair<int, int> left_min_max = find_min_max(arr, left, mid);
    pair<int, int> right_min_max = find_min_max(arr, mid+1, right);
    minmax.first = min(left_min_max.first, right_min_max.first);
    minmax.second = max(left_min_max.second, right_min_max.second);
    return minmax;
}

// Driver code
int main() {
    int arr[] = {5, 7, 2, 9, 1, 80, 3, 6, 4, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    pair<int, int> minmax = find_min_max(arr, 0, n-1);
    cout << "Minimum value: " << minmax.first << endl;
    cout << "Maximum value: " << minmax.second << endl;
    return 0;
}
