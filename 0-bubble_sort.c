#include "sort.h"
/**
 * bubble_sort - sorting an array using Bubble Sort algorithm
 * @array: array to sort
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
size_t i;
size_t j;
if (!array || size == 0 || size == 1)
return;
for (i = 0; i < size - 1; i++)
{
for (j = 0; j < size - i - 1; j++)
{
if (array[j] > array[j + 1])
{
swap(&array[j], &array[j + 1]);
print_array((const int *)array, size);
}
}
}
}

/**
*swap - switch positions in an array
*@i: first value to be switched
*@j: second value to be switched
*/
void swap(int *i, int *j)
{
int tmp = *i;
*i = *j;
*j = tmp;
}
