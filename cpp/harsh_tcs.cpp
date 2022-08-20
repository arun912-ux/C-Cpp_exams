// #include<bits/stdc++.h>

// #include<iostream>
// using namespace std;

// int main(){

//     int n;
//     cin >> n;

//     string s1, s2;

//     cin >> s1 >> s2;

//     bool flag = false;

//     for(int i=0; i<n; i++){
//         for(int j=0; j<=i; j++){
//             if(s1[i] == s2[j]){
//                 flag = true;
//                 break;
//             }
           
//         }
//     }

//     // cout << flag<< endl;
//     if(!flag){
//         cout << "-1";
//         return 0;
//     }

//     int cnt=0;
//     for(int i=0; i<n; i++){
//         // for(int j=i; j<n; j++){
//             if(s1[i] != s2[i]){
//                 cnt++;
//             }
//             // else{
//             //     break;
//             // }
//         // }
//     }

//     cout << cnt;






//     return 0;
// }





#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	string A;
	string B;
	cin>>n;
	cin>>A;
	cin>>B;
	set<char>RES;
	for(int i=0;i<n;i++)
	{
		if(A[i]!=B[i])
		    RES.insert(B[i]);
	}
	int siz=RES.size();
	int flag=0;
	
    set<char>::iterator it=RES.begin();

	for(it=RES.begin();it!=RES.end();it++)
	{
		if(count(A.begin(),A.end(),*(it)) == 0)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	  cout<<-1<<"\n";
	else
	  cout<<RES.size()<<"\n";
}







































