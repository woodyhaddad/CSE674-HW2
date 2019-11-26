#include "headr.h"

void swapQS(vector<int>& vector, int x, int y) {			// swaps two elements in vector
	int t = vector[x];
	vector[x] = vector[y];
	vector[y] = t;
}

int partition(vector<int>& vect, int low, int high) {
	int pivot = vect[high];
	int i = (low - 1);
	for (int j = low; j <= high - 1; j++) {
		if (vect[j] <= pivot) {
			i++;
			swapQS(vect, i, j);
		}
	}
	swapQS(vect, i + 1, high);
	//swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}


void QuickSort(vector<int>& vect, int low, int high) {
	if (low < high) {
		int pi = partition(vect, low, high);
		//printf("\n\n\n pi is %d\n\n\n", pi);

		QuickSort(vect, low, pi - 1);
		QuickSort(vect, pi + 1, high);
	}
}
void quickSort::sort(vector<int>& vect, int n)
{
	//vector<int> vot;
	//vot.push_back(1);
	//vot.push_back(2);
	//vot.push_back(3);
	//swapQS(vot,1,2);

	QuickSort(vect, 0, n);

}