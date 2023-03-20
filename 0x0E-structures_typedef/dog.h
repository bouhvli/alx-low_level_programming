#ifndef DOG
#define DOG

/**
 * struct dog - Define a new type struct dog.
 * @name: representation of the name of the dog.
 * @age: the age of the dog
 * @owner: identifies the owner of the dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
}
/* Typedef of structure dog */
typedef struct dog dog_t;
#endif
