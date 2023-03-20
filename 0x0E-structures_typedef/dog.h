#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Define a new type struct dog.
 * @name: representation of the name of the dog.
 * @age: the age of the dog
 * @owner: identifies the owner of the dog.
 *
 * Description: Define a new type struct dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - typedef for dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
