#include "dog.h"
#include <stdlib.h>

/**
 *init_dog - Function that initialize variable of struct dog
 *@d: pointer to struct dog
 *@name: dog's name to be initilized
 *@age: dog's age initilized
 *@owner: dog's owner initialization
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
