#include "headr.h"

void countingSort::sort(vector<int>& vect, int N)
{

	int maxValue = 0;
	int j = 0;
	for (int i = 0; i < N; i++)				// This loop finds the max value and index that we need for later on in the function
	{
		if (vect[i] >= maxValue)
		{
			maxValue = vect[i];
			j = i;
		}
	}
	//printf("maxValue is %d \n", maxValue);

	vector<int> count;
	for (int i = 0; i < maxValue+1; i++)							// Declare array of size max + 1 and initialize to zeroes
	{
		count.push_back(0);
	}


	for (int i = 0; i < N; i++)
	{
		count[vect[i]]++;
	}

	int tot = 0;
	//printf("count before cumulative ");
	//printArray(count, maxValue + 1);

	for(int i = 0; i <= maxValue; i++)						// Make count array cumulative
	{
		int temp = count[i];
		count[i] = tot;
		tot += temp;
	}
	//printf("count after cumulative ");
	//printArray(count, maxValue + 1);

	//printf("array[0] is %d \n", array[0]);

	vector<int> sorted;										// Declare sorted array and initialize values
	for (int i = 0; i < N; i++)
	{
		sorted.push_back(0);
	}
	for (int i = 0; i < N; i++)								// Create array from cumulative (count) array
	{
		//printArray(count, maxValue+1);
		//printf("i = %d, array = ", i);
		//printArray(sorted, N);
		sorted[count[vect[i]]] = vect[i];
		count[vect[i]]++;
		//printf("i is %d, array[i] is %d , count[i] is %d \n", i, array[i], count[i]);
		//printArray(sorted, N);
		//printf("duplicate[i] = %d, count[duplicate[i]] = %d, i = %d \n", i, count[array[i]], i);
	}
	vect = sorted;

}