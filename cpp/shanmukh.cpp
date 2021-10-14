
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, cnt=0;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int a, b;
    cin >> a >> b;

    for (int i = 0; i < n; i++)
    {

        if(a%arr[i] == 0  &&  b%arr[i] == 0)
        {
            cnt++;
        }

    }

    cout << cnt;

    return 0;
}



