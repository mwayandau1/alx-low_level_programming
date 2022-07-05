<<<<<<< HEAD

#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog.
 * @d: struct dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: no return.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
=======
/**
 * struct dog: New type struct
 * @name : String name
 * @age : float age
 * @owner :String owner
 *
 * Return: no return
 */


struct dog
{
	char* name;
	float age;
	char* owner;
>>>>>>> 5735716d632ee4ee163181af7eaafa073c84cc28
}
