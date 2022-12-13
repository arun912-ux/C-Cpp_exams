#include <bits/stdc++.h>

using namespace std;
int
roundfig (int x)
{
  int ren = x % 5;
  if (ren < 3)
    {
      return x;

    }
  else
    {
      return 5 - ren + x;

    }
}

int
main ()
{
  int i, n;
  cin >> n;
  int arr[n];
  for (i = 0; i < n; i++)
    {
      cin >> arr[i];
      if (arr[i] < 38)
	{
	  arr[i] = arr[i];
	}
      else
	{
	  arr[i] = roundfig (arr[i]);

	}

    }
  for (i = 0; i < n; i++)
    {
      cout << arr[i] << endl;
    }


  return 0;
}
