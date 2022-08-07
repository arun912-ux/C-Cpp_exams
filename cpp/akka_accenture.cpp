
#include<bits/stdc++.h>
using namespace std;

vector<int> primes;

bool isPrime(int n){
    if (n<2)
        return false;
    for(int i=2; i<n/2 +1; i++)
        return false;
    
    return true;
}

void priming(){
    for(int i=0; i<10000; i++){
        if(isPrime(i)){
            primes.push_back(i);
        }
    }
}

// Returns true if n is a Smith number, else false.
int isSmith(int n){
	int original_no = n;
    int pDigitSum = 0;
	for (int i = 0; primes[i] <= n/2; i++){
		while (n % primes[i] == 0){
			int p = primes[i];
			n = n/p;
			while (p > 0){
				pDigitSum += (p % 10);
				p = p/10;
			}
		}
	}
    if (n != 1 && n != original_no){
		while (n > 0){
			pDigitSum = pDigitSum + n%10;
			n = n/10;
		}
	}
    int sumDigits = 0;
	while (original_no > 0){
		sumDigits = sumDigits + original_no % 10;
		original_no = original_no/10;
	}
    if(pDigitSum == sumDigits){
        // cout << sumDigits << endl;
        return sumDigits;
    }
	return -1;
}



int main(){

    int n;
    cin >> n;
    priming();
    cout << isSmith(n);
    return 0;
}
