#ifndef _DOG_
#define _DOG_

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

/**
 * struct dog - Struct that stores some infomation of a dog
 * @name: name of the dog
 * @age: Age of the dog
 * @owner: owner of the dog
 *
 * Description: Struct called "dog" that stores its name, its age
 * and the name of its owner
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
