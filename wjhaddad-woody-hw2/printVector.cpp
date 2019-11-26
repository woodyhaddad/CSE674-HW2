#include "headr.h"

// This function is meant to be a quick debugging tool to see if the sorting classes are working

void printVector(vector<int>& vector, int N) {
	for (int i = 0; i < N; i++) {
		printf("%d, ", vector[i]);;
	}
	printf("\n");
}