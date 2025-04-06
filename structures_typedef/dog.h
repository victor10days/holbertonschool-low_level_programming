#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - Defines a dog's basic information
 * @name: Name of the dog (string)
 * @age: Age of the dog (float)
 * @owner: Owner of the dog (string)
 */


typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
