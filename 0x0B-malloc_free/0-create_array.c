#include <stdlib.h>
/*
*create_array - create array of size size and assign char
*
*@size: size of array
*@c: char to assign
*Description: creat array of size size and assign char c
*Return: pointer to array, NULL if fail
*
*/
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
