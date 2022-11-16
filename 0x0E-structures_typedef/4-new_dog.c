#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates an instance of a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: the instance of the struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;
	char *name_copy, *owner_copy;

	len1 = strlen(name);
	len2 = strlen(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	name_copy = malloc(sizeof(*name_copy) * len1 + 1);
	if (name_copy == NULL)
	{
		free(dog);
		return (NULL);
	}
	owner_copy = malloc(sizeof(*owner_copy) * len2 + 1);
	if (owner_copy == NULL)
	{
		free(dog);
		free(name_copy);
		return (NULL);
	}
	strcpy(name_copy, name);
	strcpy(owner_copy, owner);

	dog->name = name_copy;
	dog->age = age;
	dog->owner = owner_copy;
	return (dog);
}

