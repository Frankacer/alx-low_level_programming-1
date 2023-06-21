#include "main.h"
#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints an instance of struct dog
 * @d: pointer to struct dog
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("(nil)\n");
	else
		printf("%s\n", d->name);

	printf("%.6f\n", d->age);

	if (d->owner == NULL)
		printf("(nil)\n");
	else
		printf("%s\n", d->owner);
}
