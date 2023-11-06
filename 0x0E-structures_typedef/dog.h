#ifndef DOG_H
#define DOG_H
[2;2R[>77;30604;0c]10;rgb:bfbf/bfbf/bfbf]11;rgb:0000/0000/0000/**
 * struct dog - Define a new type struct dog with the following elements
 * @name: the name
 * @age: the age
 * @owner: the owner
 */

struct dog
{
char *name;
float age;
char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
