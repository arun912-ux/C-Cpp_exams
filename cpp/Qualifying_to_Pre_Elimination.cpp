#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    int n, k;

    while (t--)
    {
        cin >> n >> k;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n, greater<int>());

        int sel = arr[k - 1];
        int cnt = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= sel)
            {
                cnt++;
            }
            else
            {
                break;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}
