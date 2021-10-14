
#include<bits/stdc++.h>
using namespace std;

int equation(int x3, int y3, int a, int b, int c){

    int ans = a*x3 - b*y3;
    if(ans==c)
        return 1;
    else
        return 0;

}

int main(){
    
    int n;
    cin >> n;
    int ar[n][2];

    for(int i=0; i<n; i++){
        cin >> ar[i][0]; cin >> ar[i][1];
    }

    int x1=ar[0][0], y1=ar[0][1], x2=ar[1][0], y2=ar[1][1];

    int a = (y2-y1), b = (x2-x1), c= x1*(y2-y1)-y1*(x2-x1);
    char sign = b>0?'-':'+';
    
    int x, res=1;
    
    for(int i=2; i<n; i++){
        x = equation(ar[i][0], ar[i][1] ,a, b, c);
        res = res&x;
    }

    if(res){
        cout << a << "x" << sign << abs(b) << 'y' << "=" << c << endl;
    }else{
        cout << 0 << endl;
    }
    
    return 0;
}

