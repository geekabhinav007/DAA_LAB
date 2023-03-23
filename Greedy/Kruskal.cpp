//  Kruskal Algorithm for Minimum Spanning Tree

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of vertices: ";
    cin >> n;
    int graph[n][n];
    cout <<
        "Enter the adjacency matrix: "
         << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> graph[i][j];
        }
    }

    for (int i = 0 ; i<n ; i++){

        for (int j = 0; j < n; j++)
        {
           cout << graph[i][j] << " ";

        }
        cout << endl;
        
    }

    int key[n];
    bool mstSet[n];
    for (int i = 0; i < n; i++)
    {
        key[i] = INT_MAX;
        mstSet[i] = false;
    }
    key[0] = 0;
    int parent[n];
    parent[0] = -1;
    for (int i = 0; i < n - 1; i++)
    {
        int min = INT_MAX, minIndex;
        for (int j = 0; j < n; j++)
        {
            if (mstSet[j] == false && key[j] < min)
            {
                min = key[j];
                minIndex = j;
            }
        }
        mstSet[minIndex] = true;
        for (int j = 0; j < n; j++)
        {
            if (graph[minIndex][j] && mstSet[j] == false && graph[minIndex][j] < key[j])
            {
                parent[j] = minIndex;
                key[j] = graph[minIndex][j];
            }
        }
    }
}

