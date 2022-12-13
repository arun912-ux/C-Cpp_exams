#include <iostream> 
using namespace std;

int main()
{
    int i, j, N;
    int count;

    cin>>N;

    count = N * 2 - 1;

    for(i=1; i<=count; i++)
    {
        for(j=1; j<=count; j++)
        {
            if(j==i || (j==count - i + 1))
            {
                if(i>N/2){
                    cout << 2*N-i;
                }else{
                    cout<<i;
                }
            }
            else
            {
                cout<<" ";
            }
        }

        cout<<"\n";
    }

    return 0;
}

