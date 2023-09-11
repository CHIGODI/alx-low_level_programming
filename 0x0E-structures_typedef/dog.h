#ifndef DOG
#define DOG
#define NULL ((void *)0)
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
