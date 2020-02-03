#include "sort.h"

/**
 * quick_sort - sorts an array using quick sort
 * @array: array to sort
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
size_t less = 0;
size_t greater = size - 1;

if (!array || size == 0 || size == 1)
return;
q1sort(array, less, greater, size);
}

/**
 * q1sort - quick sort with arguments needed
 * @array: array to sort
 * @less: lowest number
 * @greater: highest number
 * @size: size of the array
 */
void q1sort(int *array, int less, int greater, size_t size)
{
int p;

if (less < greater)
{
p = part(array, less, greater, size);
q1sort(array, less, p - 1, size);
q1sort(array, p + 1, greater, size);
}
}

/**
 * part - Lomuto method
 * @array: array to part
 * @less: lowest index
 * @greater: highest index
 * @size: the size of the array
 * Return: the partition index
 */
int part(int *array, int less, int greater, size_t size)
{
int i, j;
int pivot, swap;

i = less - 1;
pivot = array[greater];
for (j = less; j <= greater - 1; j++)
{
if (array[j] < pivot)
{
i += 1;
if (i != j)
{
swap = array[j];
array[j] = array[i];
array[i] = swap;
print_array((const int *)array, size);
}
}
}
if (pivot < array[i + 1])
{
swap = array[i + 1];
array[i + 1] = array[greater];
array[greater] = swap;
print_array((const int *)array, size);
}
return (i + 1);
}
