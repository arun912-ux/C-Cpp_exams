
#include <bits/stdc++.h>

using namespace std;

int main ()
{

  int n, arr[n];
  int i, count = 0, max = 0;
  cin >> n;
  for (i = 0; i < n; i++)
    {
      cin >> arr[i];
    }

  for (i = 0; i < n; i++)
    {
      if (arr[i] > max)
	max = arr[i];
    }
  for (i = 0; i < n; i++)
    {
      if (max == arr[i])
	{
	  count++;
	}
    }
  cout << count;
  return 0;
}
