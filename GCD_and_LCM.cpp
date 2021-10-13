#include <bits/stdc++.h>
using namespace std;
long GCD(int x, int y);
long long LCM(int x, int y);

int main()
{

    int t;
    cin >> t;
    long long n1, n2;
    while (t--)
    {
        cin >> n1 >> n2;
        cout << GCD(n1, n2) << " " << LCM(n1, n2) << endl;
    }

    return 0;
}

long GCD(int x, int y)
{

    int z;

    if (x % y == 0)
    {
        return y;
    }
    else
    {

        z = x % y;
        return GCD(y, z);
    }
}

long long LCM(int x, int y)
{

    return (long long)((x * y) / (GCD(x, y)));
}
