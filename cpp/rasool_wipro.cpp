#include <bits/stdc++.h>
using namespace std;

const int MAX = 100;

void printDiagonalSums(int a[][MAX], int m, int n, int x)
{
    map<int, int> mp;
    if (n < m)
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = n; j < m; j++)
            {
                a[i][j] = 1;
            }
        }
        n = m;
    }

    if (m < n)
    {
        for (int j = m; j < n; j++)
        {
            for (int i = 0; i < n; i++)
            {
                a[j][i] = 1;
            }
        }
        m = n;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j)
                mp[a[i][j]] += 1;
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (mp[a[i][i]] > x)
        {
            sum += a[i][i];
        }
    }
    cout << sum << endl;
}

// Driver code
int main()
{
    int a[][MAX] = {{4, 5, 6}, {5, 5, 6}};
    printDiagonalSums(a, 2, 3, 1);
    return 0;
}