#include "headr.h"


// Merges two subarrays of vect.
// First subarray is vect[l..m]
// Second subarray is vect[m+1..r]
void merge(vector<int>& vect, int l, int m, int r) {

	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;

	/* create temp arrays */
	vector<int> L, R;

	/* Copy data to temp arrays L[] and R[] */
	for (i = 0; i < n1; i++) {
		//printf("n1 is %d \n\n\n", n1);
		//printf("i is %d \n\n\n", i);
		//printf("l is %d \n\n\n", l);

		//L[i] = vect[l + i];
		L.push_back(vect[l + i]);


	}

	for (j = 0; j < n2; j++) {
		R.push_back(vect[m + 1 + j]);

	}

	/* Merge the temp arrays back into vect[l..r]*/
	i = 0; // Initial index of first subarray
	j = 0; // Initial index of second subarray
	k = l; // Initial index of merged subarray
	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			vect[k] = L[i];
			i++;
		}
		else {
			vect[k] = R[j];
			j++;
		}
		k++;

	}

	/* Copy the remaining elements of L[], if there
	are any */
	while (i < n1) {
		vect[k] = L[i];
		i++;
		k++;

	}

	/* Copy the remaining elements of R[], if there
	are any */
	while (j < n2) {
		vect[k] = R[j];
		j++;
		k++;

	}

}

/* l is for left index and r is right index of the
sub-array of arr to be sorted */
void MergeSort(vector<int>& vector, int l, int r) {

	if (l < r) {
		// Same as (l+r)/2, but avoids overflow for
		// large l and h
		int m = l + (r - l) / 2;

		// Sort first and second halves
		MergeSort(vector, l, m);
		MergeSort(vector, m + 1, r);

		merge(vector, l, m, r);

		//printVector(vector, vector.size());
	}
}


void mergeSort::sort(vector<int>& vector, int n)
{
	MergeSort(vector, 0, n-1);

}