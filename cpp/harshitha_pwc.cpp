#include <bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> ar)
{

    vector<int> a1;
    int n= ar.capacity();
    int arr[n], f[n];

    for(int i=0; i<n; i++){
        arr[i]=ar.at(i);
    }
    
    sort(arr, arr+n);

    for(int i=0, k=0; i<n; i++){
        if(i%2==0)
            f[i] = arr[k++];
    }

    for(int i=0, k=0; i<n; i++){
        if(i%2!=0)
            f[i] = arr[n-1-k++];
    }

    for(int i=0; i<n; i++){
        a1.push_back(f[i]);
    }

    return a1;
}

int main()
{

    int n;
    cin >> n;

    vector<int> vi;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        vi.push_back(arr[i]);
    }

    vi = solve(vi);
    for (int i = 0; i < n; i++){
        cout << vi.at(i) << " ";
    }

    return 0;
}