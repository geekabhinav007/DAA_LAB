// Implement merge sort algorithm and demonstrate divide and conquer technique.

#include <iostream>
using namespace std;

void merge(int arr[], int left, int mid, int right){
    int i = left;
    int j = mid + 1;
    int k = left;
    int temp[1000000];

