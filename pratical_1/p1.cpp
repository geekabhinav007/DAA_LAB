// Implement binary search algorithm and compute its time complexity.

#include <iostream>
#include <ctime>
using namespace std;

bool binarySearch(int arr[], int size , int key){
    int left = 0;
    int right = size - 1;
    int mid = left + (right - left) / 2;
    while (left <= right){
        if (arr[mid] == key){
            return true;
        }
        else if (arr[mid] < key){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
        mid = left + (right - left) / 2;
    }
    return false;  

}

int main(){
    int arr[1000000];
    for (int i = 0; i < 1000000; i++){
        arr[i] = i;
    }
    int key = 999999;
    clock_t start = clock();
    bool result = binarySearch(arr, 1000000, key);
    clock_t end = clock();
    cout << "Time: " << (double)(end - start) / CLOCKS_PER_SEC << endl;
    cout << "Result: " << result << endl;
    return 0;
}