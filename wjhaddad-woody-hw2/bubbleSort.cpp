#include "headr.h"

void bubbleSort::sort(vector<int>& vector, int N)
{
	for (int j = 1; j < N; j++)
	{
		for (int i = 1; i < N; i++) {
			if (vector[i - 1] > vector[i]) {
				int temp = vector[i];
				vector[i] = vector[i - 1];
				vector[i - 1] = temp;
			}
		}
	}

}
