#include "sort.h"

/**
 *bubble_sort - ascending order algorithm ..
 *@array: what will be sorted ..
 *@size: arr_size ..
 */
void bubble_sort(int *array, size_t size)
{
	size_t j, counter;
	int my_num;

	if (size < 2)
		return;
	for (counter = 0; counter < size - 1; counter++)
	{
		for (j = 0; j < size - counter - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				n = array[j];
				array[j] = array[j + 1];
				array[j + 1] = my_num;
				arr_printer(array, size);
			}
		}
	}
}