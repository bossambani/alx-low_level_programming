#include "main.h"
#include <stdlib.h>
/**
 *array_range - Creates an array of integers
 *@max: maximum variable
 *@min: minimum variable
 *Return: 0;
 */
int *array_range(int min, int max)
{
  if (min > max)
{
    return NULL;
}

  int *array = malloc((max - min + 1) * sizeof(int));
  if (array == NULL)
{
    return NULL;
}

  // Fill the array with the values from min to max.
  for (int i = min; i <= max; i++) 
{
    array[i - min] = i;
}

  return array;
}

