#ifndef DOG_H
#define DOG_H

/**
 * struct dog - new structure of a dog
 * @name: character string
 * @age: integer
 * @owner: character string
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_o;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
