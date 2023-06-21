#ifndef DOG_H
#define DOG_H

/**
 * struct dog - models a dog object
 * @name: name of dog
 * @age: dog's age
 * @owner: dog's owner
 * Description: This struct stores the attributes of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
