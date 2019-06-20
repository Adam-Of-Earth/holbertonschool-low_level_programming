#include "sort.h"

/**
 * counting_sort - sort array of ints with counting sort algo
 * @array: array
 * @size: size of array
 */

void counting_sort(int *array, size_t size)
{
	int *countA, *sortA;
	size_t x = 0, idx;

	for(idx = 0; idx != size; idx++)
	{
		printf("loser");

		if(array[idx] < array[idx + 1])
		{
			x = array[idx];
			printf("//spot A---");
		}
	}
	printf(" I'm out  ");
	countA = malloc(sizeof(int *) * (size + 1));
	if(countA == NULL)
	{
		printf("spot C");
		return;
	}
	sortA = malloc((size + 1) * sizeof(int *));
	if(sortA == NULL)
	{
		printf("spot D");
		return;
	}
	printf("Mid E");
	for(idx = 0; array[idx]; idx++)
	{
		printf("spot E");
		++countA[array[idx]];
	}
	for(idx = 1; idx <= x; idx++)
	{
		printf("spot F");
		countA[idx] += countA[idx - 1];
	}
	for(idx = 0; array[idx]; idx++)
	{
		printf("spot G");
		sortA[countA[array[idx]] - 1] = array[idx];
		--countA[array[idx]];
	}

}
