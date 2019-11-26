#include "headr.h"

void insertionSort::sort(vector<int>& vector, int N)
{	
	for (int i = 1; i < N; i++) {
		int j = i;
		while (j > 0 && vector[j] < vector[j - 1]) {
			int temp = vector[j - 1];
			vector[j - 1] = vector[j];
			vector[j] = temp;
			j = j - 1;
		}

	}
}
