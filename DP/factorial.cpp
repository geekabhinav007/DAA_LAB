//  Factorial using Dynamic Programming

#include <iostream>
using namespace std;

int fact(int n)
{
    int f[n + 1];
    f[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        f[i] = i * f[i - 1];
    }
    return f[n];
}

int main()
{

    int n;
    cin >> n;
    cout << fact(n) << endl;

    return 0;
}