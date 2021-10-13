#include <bits/stdc++.h>
using namespace std;

int main()
{

    string st;
    cin >> st;
    int n = st.length();
    int cnt = 0, sum = 0;

    for (int i = 0; i < n; i++)
    {

        cnt = 0;
        for (int j = i; j < n; j++)
        {

            if (j == n - 1 && i == n - 2)
            {
                i = j;
            }
            if (st[i] == st[j])
            {
                cnt++;
            }
            else
            {
                i = j - 1;
                break;
            }
        }
        // cout << cnt << endl;
        if (cnt % 2 == 0)
        {
            sum += cnt;
        }
    }

    cout << endl
         << sum << endl;

    return 0;
}