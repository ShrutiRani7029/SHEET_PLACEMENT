#include <bits/stdc++.h>
using namespace std;

void findFirstAndLast(int arr[], int n, int x)
{
	int first, last;
	// to store first occurrence
	first = lower_bound(arr, arr + n, x) - arr;///first=
	// to store last occurrence
	cout<<first;
	last = upper_bound(arr, arr + n, x) - arr - 1;

	if (first == n) {
		first = -1;
		last = -1;
	}
	cout << "First Occurrence = " << first
		<< "\nLast Occurrence = " << last;
}

// Driver code
int main()
{
	int arr[] = { 1, 2, 2, 2, 2, 3, 4, 7, 8, 8 };
	int n = sizeof(arr) / sizeof(int);///n=10
	int x = 9;
	findFirstAndLast(arr, n, x);
	return 0;
}
