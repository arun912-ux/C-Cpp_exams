#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int input1 = n;

    // int input2[] = {-39957, -17136, 35466, 21820, -26711};

    int input2[] = {-4527, -1579, -38732, -43669, -9287, -48068, -30293, -30867, 18677};
    
    int minsum = INT_MAX;

    // int n = input1;

    for(int i=0; i<n; i++){

        int sum =0;

        for(int j=i; j<n; j++){

            sum+=input2[j];
            minsum = min(minsum, sum);

        }

    }

    return minsum;

    // cout << minsum;


    return 0;
}