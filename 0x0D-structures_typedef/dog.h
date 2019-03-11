#ifndef DOG
#define DOG
/**
 *
 *
 *
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 *
 */
typedef struct dog dog_t;
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
