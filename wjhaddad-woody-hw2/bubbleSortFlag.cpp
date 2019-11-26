#include "headr.h"

void bubbleSortFlag::sort(vector<int>& vector, int N)
{
	int swapped = 1;
	while (swapped) {
		swapped = 0;
		for (int i = 1; i < N; i++) {
			if (vector[i - 1] > vector[i]) {
				int temp = vector[i];
				vector[i] = vector[i - 1];
				vector[i - 1] = temp;
				swapped = 1;
			}
		}
	}
}
