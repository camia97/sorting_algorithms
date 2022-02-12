#include "sort.h"
/**
 * bubble_sort - function that sorts an array of ints
 * @array: the array to be sorted
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	int ord = 1, pos, aux = 0;

	if (!array || !size)
		return;
	while (ord == 1)
	{
		ord = 0;
		for (pos = 0; pos < (int)size - 1; pos++)
		{
			if (array[pos] > array[pos + 1])
			{
				ord = 1;
				aux = array[pos];
				array[pos] = array[pos + 1];
				array[pos + 1] = aux;
				print_array(array, size);
			}
		}
	}
}
