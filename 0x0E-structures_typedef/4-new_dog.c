#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - a function that gets the length of a string
 * @str: the string
 *
 * Return: the length of the string
 */
int _strlen(char *str)
{
int l = 0;
while (*str++)
l++;
return (l);
}

/**
 * _strcopy - a function that Copies a string, including the
 * terminating null byte, to a buffer pointed to by dest.
 * @dest: The destination where the content is to be copied.
 * @src: The string to be copied.
 *
 * Return: The pointer to dest.
 */
char *_strcopy(char *dest, char *src)
{
int i = 0;

for (i = 0; src[i]; i++)
dest[i] = src[i];
dest[i] = '\0';
return (dest);
}

/**
 * new_dog - function that creates a new dog
 * @name: the name
 * @age: the age
 * @owner: the owner
 *
 * Return: the new struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
if (name == NULL || age < 0 || owner == NULL)
return (NULL);

dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);

dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}

dog->name = _strcopy(dog->name, name);
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
