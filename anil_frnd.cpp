#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;

    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        // cout << arr[i] << ' ';
    }
    cout << endl;

    int st = 0;
    int fi = 0;

    int sum = 0, maxsum = 0;

    for (int i = 1; i < n; i++)
    {

        // cout << "st:" << st << "  fi:" << fi << "  i:" << i << endl;
        if (arr[fi] < arr[i])
        {

            fi++;
            // cout << "sum :" << sum << endl;
        }
        else
        {
            sum = 0;
            // cout << "st:" << st << "  fi:" << fi << "  i:" << i << endl;
            for (int j = st; j <= fi; j++)
            {
                sum += arr[j];
            }

            // cout << sum << endl;

            maxsum = max(maxsum, sum);
            // sum=0;
            fi++;
            st = fi;
        }

        // cout << "maxsum: " << maxsum << endl;
    }

    sum = 0;
    // cout << "st:" << st << "  fi:" << fi  << endl;
    for (int j = st; j <= fi; j++)
    {
        sum += arr[j];
    }

    // cout << sum << endl;

    maxsum = max(maxsum, sum);
    // sum=0;
    fi++;
    st = fi;
    // maxsum = max(maxsum, sum);

    // cout << "maxsum: " << maxsum << endl;
    cout << maxsum << endl;
    return 0;
}