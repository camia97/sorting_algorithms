#include "sort.h"
/**
 * quick_sort - sort an array with quick sort
 * @array: array to be sorted
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (array && size > 1)
		q_rec(array, 0, size - 1, size);
}
/**
 * q_partition - function that separate the array
 * @array: array to be sorted
 * @low: the first element of the partition
 * @high: the last element of the partition
 * @size: size of the array
 * Return: the pivot
 */
size_t q_partition(int *array, size_t low, size_t high, size_t size)
{
	int aux;
	size_t p = high, j, i;

	i = low - 1;
	for (j = low; j <= high; j++)
	{
		if (array[j] < array[p])
		{
			i++;
			if (i != j)
			{
				aux = array[j];
				array[j] = array[i];
				array[i] = aux;
				print_array(array, size);
			}
		}
	}
	i++;
	if (array[i] > array[p])
	{
		aux = array[p];
		array[p] = array[i];
		array[i] = aux;
		print_array(array, size);
	}
	return (i);
}
/**
 * q_rec - function that make recursive the partition
 * @array: array to be sorted
 * @low: the first element of the partition
 * @high: the last element of the partition
 * @size: size of the array
 */
void q_rec(int *array, size_t low, size_t high, size_t size)
{
	size_t idx;

	if (low < high)
	{
		idx = q_partition(array, low, high, size);
		if (idx > 0)
			q_rec(array, low, idx - 1, size);
		if (idx < high)
			q_rec(array, idx + 1, high, size);
	}

}
