#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes variable dog
 * @d: name of struct
 * @name: dogs name
 * @age: dogs age
 * @owner: dogs owners name
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL);
	else
	{
		d->name =name;
		d->age = age;
		d ->owner = owner;
	}
}
