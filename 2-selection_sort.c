#include "sort.h"

/**
 * selection_sort - sorts an array using selection sort
 * @array: array to sort
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
size_t i;
size_t j;
size_t k;
int a;
int b;
if (!array || size == 0 || size == 1)
return;
for (i = 0; i < size -1; i++)
{
a = array[i];
b = a;
for (j = i + 1; j < size; j++)
{
if (array[j] < b)
{
b = array[j];
k = j;
}
}
if ( a != b)
{
array[k] = a;
array[i] = b;
print_array((const int *)array, size);
}
}
}
