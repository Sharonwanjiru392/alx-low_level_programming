#include " dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints a struct dog.
 * @d: The struct dog to be printed.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (n11)\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age < 0)
		printf("Age: (n11)\n");
	else
		printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (n11)\n");
	else
		printf("Owner: %s\n", d->owner);
}