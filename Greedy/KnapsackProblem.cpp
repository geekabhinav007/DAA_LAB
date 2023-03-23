// KnapSack Problem solution using Greedy Algorithm

#include <iostream>
using namespace std;

int main() {
    int n, W;
    cout << "Enter the number of items: ";
    cin >> n;
    cout << "Enter the capacity of the knapsack: ";
    cin >> W;
    int weight[n], profit[n];
    cout << "Enter the weights of the items: ";
    for (int i = 0; i < n; i++) {
        cin >> weight[i];
    }
    cout << "Enter the profits of the items: ";
    for (int i = 0; i < n; i++) {
        cin >> profit[i];
    }
    float ratio[n];
    for (int i = 0; i < n; i++) {
        ratio[i] = (float)profit[i] / weight[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (ratio[i] < ratio[j]) {
                float temp = ratio[j];
                ratio[j] = ratio[i];
                ratio[i] = temp;
                int temp1 = weight[j];
                weight[j] = weight[i];
                weight[i] = temp1;
                int temp2 = profit[j];
                profit[j] = profit[i];
                profit[i] = temp2;
            }
        }
    }
    int currentWeight = 0;
    float finalProfit = 0.0;
    for (int i = 0; i < n; i++) {
        if (currentWeight + weight[i] <= W) {
            currentWeight += weight[i];
            finalProfit += profit[i];
        } else {
            int remain = W - currentWeight;
            finalProfit += profit[i] * ((float)remain / weight[i]);
            break;
        }
    }
    cout << "Maximum profit is: " << finalProfit << endl;
    return 0;
}


