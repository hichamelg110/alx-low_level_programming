#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - function that gets the length of a string
 * @str: the string
 *
 * Return: the length of the string
 */

int _strlen(char *str)
{
int length = 0;

while (str[length])
length++;

return (length);
}

/**
 * _strcopy - a function that Copies a string, including the
 * terminating null byte, to a buffer pointed to by dest.
 * @dest:the destination
 * @src: the source
 *
 * Return: the pointer to dest
 */

char *_strcopy(char *dest, char *src)
{
int i;

for (i = 0; src[i]; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}

/**
 * new_dog - a function that creates a new dog
 * @name: the name
 * @age: the age
 * @owner: the owner
 *
 * Return: the new struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
if (name == NULL || owner == NULL)
return (NULL);

dog_t *dog = malloc(sizeof(dog_t);
if (dog == NULL)
return (NULL);

dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
_strcopy(dog->name, name);
dog->age = age;

dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if (dog->owner == NULL)
{
free(dog->name);
free(dog);
return (NULL);

}
dog->owner = _strcopy(dog->owner, owner);
return (dog);
}
