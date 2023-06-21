#include "main.h"
#include "dog.h"

/**
 * init_dog - initialises variable d
 *
 * @d: pointer variable of type struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
