#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - A structure of a dog.
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog.
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* #ifndef _DOG_H */

