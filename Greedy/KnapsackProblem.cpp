// KnapSack Problem
// Time Complexity: O(nW)
// Space Complexity: O(nW)

#include <iostream>
using namespace std;

int max(int a, int b) { return (a > b) ? a : b; }

// Returns the maximum value that can be put in a knapsack of capacity W