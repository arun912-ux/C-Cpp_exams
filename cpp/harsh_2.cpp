// // C++ program for implementation
// // of Bubble sort
#include <bits/stdc++.h>
using namespace std;


int cnt=0;
// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)

		// Last i elements are already
		// in place
		for (j = 0; j < n - i - 1; j++)
			if (arr[j] > arr[j + 1]){
				swap(arr[j], arr[j + 1]);
                cnt++;
            }
}

// Function to print an array
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl << cnt;
}

// Driver code
int main()
{
	int arr[] = { 2,3,1,5,4 };
	int N = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, N);
	cout << "Sorted array: \n";
	printArray(arr, N);
	return 0;
}
// // This code is contributed by rathbhupendra


// C++ program for implementation of
// selection sort
// #include <bits/stdc++.h>
// using namespace std;

// int cnt=0;

// //Swap function
// void swap(int *xp, int *yp)
// {
// 	int temp = *xp;
// 	*xp = *yp;
// 	*yp = temp;
//     cnt++;
// }

// void selectionSort(int arr[], int n)
// {
// 	int i, j, min_idx;

// 	// One by one move boundary of
// 	// unsorted subarray
// 	for (i = 0; i < n-1; i++)
// 	{
	
// 		// Find the minimum element in
// 		// unsorted array
// 		min_idx = i;
// 		for (j = i+1; j < n; j++)
// 		if (arr[j] < arr[min_idx])
// 			min_idx = j;

// 		// Swap the found minimum element
// 		// with the first element
// 		if(min_idx!=i)
// 			swap(&arr[min_idx], &arr[i]);
// 	}
// }

// //Function to print an array
// void printArray(int arr[], int size)
// {
// 	int i;
// 	for (i=0; i < size; i++)
// 		cout << arr[i] << " ";
// 	cout << endl << cnt;
// }

// // Driver program to test above functions
// int main()
// {
// 	int arr[] = {2,3,1,5,4};
// 	int n = sizeof(arr)/sizeof(arr[0]);
// 	selectionSort(arr, n);
// 	cout << "Sorted array: \n";
// 	printArray(arr, n);
// 	return 0;
// }
// This is code is contributed by rathbhupendra



// C++ program for insertion sort

// #include <bits/stdc++.h>
// using namespace std;
// int cnt=0;
// // Function to sort an array using
// // insertion sort
// void insertionSort(int arr[], int n)
// {
// 	int i, key, j;
// 	for (i = 1; i < n; i++)
// 	{
// 		key = arr[i];
// 		j = i - 1;

// 		// Move elements of arr[0..i-1],
// 		// that are greater than key, to one
// 		// position ahead of their
// 		// current position
// 		while (j >= 0 && arr[j] > key)
// 		{
// 			arr[j + 1] = arr[j];
// 			j = j - 1;
// 		}
// 		arr[j + 1] = key;
//         cnt++;
// 	}
// }

// // A utility function to print an array
// // of size n
// void printArray(int arr[], int n)
// {
// 	int i;
// 	for (i = 0; i < n; i++)
// 		cout << arr[i] << " ";
// 	cout << endl << cnt;
// }

// // Driver code
// int main()
// {
// 	int arr[] = { 2,3,1,5,4 };
// 	int N = sizeof(arr) / sizeof(arr[0]);

// 	insertionSort(arr, N);
// 	printArray(arr, N);

// 	return 0;
// }
// This is code is contributed by rathbhupendra

















































































