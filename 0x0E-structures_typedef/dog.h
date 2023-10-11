#ifndef DOG_H
#define DOG_H

/**
 * struct dog - my structure
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: This structure represents information
 * about a dog,including its name, age, and owner.
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

#endif /* DOG_H */
