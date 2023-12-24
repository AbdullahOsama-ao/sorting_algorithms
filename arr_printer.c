#include <stdlib.h>
#include <stdio.h>

/**
 * arr_printer - int_arr printer ..
 *
 * @array: arr will be printed ..
 * @size: ele in arr ..
 */
void arr_printer(const int *array, size_t size)
{
	size_t counter;
	int a = 4;

	my_loop(a);
	counter = 0;
	while (array && counter < size)
	{
		if (counter > 0)
			printf(", ");
		printf("%d", array[counter]);
		my_loop(a);
		++counter;
	}
	printf("\n");
	my_loop(4);
}

/**
 * my_loop - no aim func..
 *
 * @counter: my counter. ..
 */
void my_loop(int counter)
{
	int i = 3;

	while (i--)
	{
		counter++;
	}
}

