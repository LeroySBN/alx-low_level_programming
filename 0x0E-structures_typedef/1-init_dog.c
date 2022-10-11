#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initializes a variable of type struct dog.
 *
 * @name: first member
 * @age: second member
 * @owner: third member
 * @d: pointer to the structure
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
