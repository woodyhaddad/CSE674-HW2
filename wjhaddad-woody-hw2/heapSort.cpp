#include "headr.h"

// A utility function to swap two elements
void swap(vector<int>& vector, int x, int y) {
	int t = vector[x];
	vector[x] = vector[y];
	vector[y] = t;
}

// To heapify a subtree rooted with node i which is
// an index in vector. n is size of heap
void heapify(vector<int>& vector, int n, int i) {
	int largest = i;  // Initialize largest as root
	int l = 2 * i + 1;  // left = 2*i + 1
	int r = 2 * i + 2;  // right = 2*i + 2

						// If left child is larger than root
	if (l < n && vector[l] > vector[largest])
		largest = l;

	// If right child is larger than largest so far
	if (r < n && vector[r] > vector[largest])
		largest = r;

	// If largest is not root
	if (largest != i) {
		swap(vector, i, largest);

		// Recursively heapify the affected sub-tree
		heapify(vector, n, largest);
	}
}

// main function to do heap sort
//void heapSort(vector<int>& vector, int n) {
//	// Build heap (rearrange array)
//	for (int i = n / 2 - 1; i >= 0; i--) {
//		heapify(&vector, n, i);
//	}
//
//	// One by one extract an element from heap
//	for (int i = n - 1; i >= 0; i--) {
//		// Move current root to end
//		swap(&vector, 0, i);
//
//		// call max heapify on the reduced heap
//		heapify(&vector, i, 0);
//	}
//}

void heapSort::sort(vector<int>& vector, int n)
{
	// Build heap (rearrange array)
	for (int i = n / 2 - 1; i >= 0; i--) {
		heapify(vector, n, i);
	}

	// One by one extract an element from heap
	for (int i = n - 1; i >= 0; i--) {
		// Move current root to end
		swap(vector, 0, i);

		// call max heapify on the reduced heap
		heapify(vector, i, 0);
	}
}