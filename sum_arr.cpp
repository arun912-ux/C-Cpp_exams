#include<bits/stdc++.h>
using namespace std;

int main(){

    /*
    1. First, it takes the number of elements in the array as input.
    2. Then, it takes the array elements as input.
    3. Then, it takes the string as input.
    4. If the string is not empty, it prints “Wrong input” and returns.
    5. Then, it checks if the array elements are unique. If not, it increments the duplicate elements by 1.
    6. Then, it calculates the sum of the array elements and prints it.
    */
   
    int n;
    cin>>n;
    int arr[n];

    for (int i=0; i<n; i++){
        cin >> arr[i];
    }


    string x;
    cin >> x;

    if (!x.empty()){
        cout << "Wrong input" << endl;
        return 0;
    }   

    for (int i=0; i<n-1; i++){
        for (int j=i+1; j<n; j++){
            if (arr[i] == arr[j]){
                arr[j]++;
            }
        }
    }

    int sum=0;
    for (int i=0; i<n; i++){
        sum+= arr[i];
    }

    cout << sum;

    return 0;
}