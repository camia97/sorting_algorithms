#include "sort.h"
/**
 * quick_sort - sort an array with quick sort
 * @array: array to be sorted
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	(void) size;
	q_sort(array, 0, size - 1, size);
}
/**
 * 
 *
 *
 */
void q_sort(int *array, size_t high, size_t low, size_t size)
{
	int aux;
	size_t p = size, j, i;
	
	(void) low;
	(void) high;

	i = low - 1;
	for (j = 0; j < size - 1; j++)
	{
		if (array[j] < array[p])
		{
			i++;
			if (i != j)
			{
				aux = array[i];
				array[j] = array[i];
				array[i] = aux;
				print_array(array, size);
			}
		}
	}
	i++;
	if (p != i)
	{
		aux = array[p];
		array[p] = array[i];
		array[i] = aux;
	}
}
