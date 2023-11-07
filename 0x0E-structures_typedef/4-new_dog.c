#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - creates new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: a dog object
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, l1, l2;
	dog_t *adog;
	char *a, *b;

	l1 = 0;
	for (i = 0; name[i] != '\0'; i++)
		l1++;
	l2 = 0;
	for (i = 0; owner[i] != '\0'; i++)
		l2++;
	adog = malloc(sizeof(dog_t));
	if (adog == NULL)
		return (NULL);
	a = malloc((l1 + 1) * sizeof(char));
	if (a == NULL)
	{
		free(adog);
		return (NULL);
	}
	for (i = 0; i < l1; i++)
		a[i] = name[i];
	a[i] = '\0';
	adog->name = a;
	adog->age = age;
	b = malloc((l2 + 1) * sizeof(char));
	if (b == NULL)
	{
		free(a);
		free(adog);
		return (NULL);
	}
	for (i = 0; i < l2; i++)
		b[i] = owner[i];
	b[i] = '\0';
	adog->owner = b;
	return (adog);
}

