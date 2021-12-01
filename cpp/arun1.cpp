#include<bits/stdc++.h>
using namespace std;

int main(){

    int x=77;
    int y=4, ans;
    ans = (x%y>0 || x&y!=1)? ((y=x++ % ++y)>=2 ? (++x%++y):y): (x=x++ % ++y);

    cout << ans;

    return 0;
}

