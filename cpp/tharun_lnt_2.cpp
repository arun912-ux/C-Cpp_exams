#include<bits/stdc++.h>
using namespace std;

string toUpper(string x){
    int i=0;
    while(i < x.length())
  	{
  		if(isupper(x[i]))
  		{
  			x[i] = tolower(x[i]);
		}
  		i++;
  	}
    // cout << x;
    return x;
}

string getTown(vector<string> peopleNames){

    vector<string> arr
    //  = peopleNames
    ;

    int n = arr.size();

    for(int i=0; i<n; i++){
        string x = toUpper(peopleNames.at(i));
        // string xx = toUpper(x);
        cout << x;
        arr.push_back(x);
    }

    // Take first word from array as reference
    string s = arr[0];
    int len = s.length();
 
    string res = "";
 
    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j <= len; j++) {
            // generating all possible substrings
            // of our reference string arr[0] i.e s
            string stem = s.substr(i, j);
            int k = 1;
            for (k = 1; k < n; k++) {
                // Check if the generated stem is
                // common to all words
                if (arr[k].find(stem) == std::string::npos)
                    break;
            }
 
            // If current substring is present in
            // all strings and its length is greater
            // than current result
            if (k == n && res.length() < stem.length())
                res = stem;
        }

    }
    return res;
}



int main()
{

    int n;
    cin >> n;

    vector<string> s;

    for(int i=0; i<n; i++){
        string x;
        cin >> x;
        s.push_back(x);
    }

    cout << getTown(s);
    

    return 0;
}