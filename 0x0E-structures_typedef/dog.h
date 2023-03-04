#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - contains the data for dogs
 * @name: dog's name
 * @age: dog's age
 * @owner: who is the dog's owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/*prototypes*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int get_len(int i);
char *str_cpy(char *dest, char *src);

#endif /*DOG_H*/
