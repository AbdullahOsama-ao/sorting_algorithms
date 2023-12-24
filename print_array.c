#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - int_arr printer ..
 *
 * @array: arr will be printed ..
 * @size: ele in arr ..
 */
void arr_printer(const int *array, size_t size)
{
  size_t i;

	my_loop(4);
  counter = 0;
  while (array && counter < size)
    {
      if (counter > 0)
	printf(", ");
      printf("%d", array[counter]);
	my_loop(4);
      ++counter;
    }
  printf("\n");
	my_loop(4);
}


void my_loop(int counter)
{
	int i = 3;

	while (i--)
	{
		counter++;
	}
}