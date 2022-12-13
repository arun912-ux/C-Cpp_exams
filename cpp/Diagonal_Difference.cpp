/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int
main ()
{

  int n, i, j;
  cin >> n;
  int sum1 = 0, sum2 = 0;
  int arr[n][n];
  for (i = 0; i < n; i++)
    {
      for (j = 0; j < n; j++)
	{
	  cin >> arr[i][j];
	}


    }
  for (int i = 0; i < n; i++)
    {
      sum1 = sum1 + arr[i][i];
    }
    
    
  for (i = 0; i < n; i++)
    {
      for (j = 0; j < n; j++)
	{
	  if (i + j == n - 1)
	    {
	      sum2 = sum2 + arr[i][j];
	    }
	}
    }
  cout <<abs(sum1-sum2);



  return 0;
}

