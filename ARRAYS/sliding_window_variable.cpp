/* An efficient program to print subarray with sum as given sum */
#include<stdio.h> 
#include<bits/stdc++.h>
using namespace std;

/* Returns true if the there is a subarray of arr[] with a sum equal to 'sum' 
otherwise returns false. Also, prints the result */
int subArraySum(int arr[], int n, int sum) 
{ 
	/* Initialize curr_sum as value of first element 
	and starting point as 0 */
	int curr_sum = 0, start = 0, i; 

	/* Add elements one by one to curr_sum and if the curr_sum exceeds the 
	sum, then remove starting element */
	for (i = 0; i < n; i++) 
	{ 
		curr_sum = curr_sum + arr[i]; 
		// If curr_sum exceeds the sum, then remove the starting elements 
		while (curr_sum > sum && start < i) 
		{ 
			curr_sum = curr_sum - arr[start]; 
			start++; 
		} 

		// If curr_sum becomes equal to sum, then return true 
		if (curr_sum == sum) 
		{ 
			printf ("Sum found between indexes %d and %d", start, i); 
			return 1; 
		} 

		// Add this element to curr_sum 
		
	} 

	// If we reach here, then no subarray 
	printf("No subarray found"); 
	return 0; 
} 
// Driver program to test above function 
int main() 
{ 
	int arr[] = {13,1,1,100}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	int sum = 100; 
	subArraySum(arr, n, sum); 
	return 0; 
} 