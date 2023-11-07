#include "dog.h"
#include <stdio.h>
/**
 *print_dog - prints struct dog
 *@d: pointer to struct dog
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: ");
		if (d->name == NULL)
			printf("(nil)\n");
		else
			printf("%s\n," d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: ");
		 if (d->owner == NULL)
                        printf("(nil)\n");
                else
                        printf("%s\n," d->owner);
	}
}

