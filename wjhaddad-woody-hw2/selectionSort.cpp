#include "headr.h"

void selectionSort::sort(vector<int>& vector, int N)
{
	for (int i = 1; i < N-1; i++) {
		int min = i;
		for (int j = i + 1; j < N; j++)
		{
			if (vector[j] < vector[min]) {
				min = j;
			}
		}

		int temp = vector[i];
		vector[i] = vector[min];
		vector[min] = temp;

	}
}