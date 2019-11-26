#include "headr.h"
// reference https://www.geeksforgeeks.org/radix-sort/


// A utility function to get maximum value in arr[] 
int getMax(vector<int>& vect, int n)
{
	int mx = vect[0];
	for (int i = 1; i < n; i++)
	{
		if (vect[i] > mx)
			mx = vect[i];
	}
		return mx;
}

// A function to do counting sort of arr[] according to 
// the digit represented by exp. 
void countSort(vector<int>& vect, int n, int exp)
{
	vector<int> output; // output array 
	vector<int> count;							// initialize count vector with size 10 and all zeros
	for (int i = 0; i < 10; i++)
	{
		count.push_back(0);
	}


	// Store count of occurrences in count[] 
	for (int i = 0; i < n; i++)
		{
		count[(vect[i] / exp) % 10]++;
		}

	// Change count[i] so that count[i] now contains actual 
	//  position of this digit in output[] 
	for (int i = 1; i < 10; i++)
		{
		count[i] += count[i - 1];
		}

	int sizeOfOutput = getMax(count, count.size());

	for (int i = 0; i < sizeOfOutput; i++)		// initialize output vector with size 10 and all zeros
	{
		output.push_back(0);
	}
	// Build the output array 
	for (int i = n - 1; i >= 0; i--)
	{	
		output[count[(vect[i] / exp) % 10] - 1] = vect[i];
		count[(vect[i] / exp) % 10]--;
	}

	// Copy the output array to arr[], so that arr[] now 
	// contains sorted numbers according to current digit 
	for (int i = 0; i < n; i++)
	{
		vect[i] = output[i];
	}
}

void radixSort::sort(vector<int>& vect, int n)
{
	// Find the maximum number to know number of digits 
	int m = getMax(vect, n);

	// Do counting sort for every digit. Note that instead 
	// of passing digit number, exp is passed. exp is 10^i 
	// where i is current digit number 
	for (int exp = 1; m / exp > 0; exp *= 10)
	{
		countSort(vect, n, exp);

	}

}
