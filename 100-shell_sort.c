#include "sort.h"
/**
 * shell_sort - function that sorts an array
 * @array: array to be sorted
 * @size: size of the array
 */
void shell_sort(int *array, size_t size)
{
	size_t gap = 1, i = 0, j = 0;
	int tmp;

	if (!array || size < 2)
		return;
	while (gap < size / 3)
	{
		gap = (gap * 3) + 1;
	}
	while (gap >= 1)
	{
		for (i = gap; i < size; i++)
		{
			tmp = array[i];
			for (j = i; j >= gap; j -= gap)
			{
				if (tmp < array[j - gap])
					array[j] = array[j - gap];
				else
					break;
			}
			array[j] = tmp;
		}
		print_array(array, size);
		gap = (gap - 1) / 3;
	}
}
