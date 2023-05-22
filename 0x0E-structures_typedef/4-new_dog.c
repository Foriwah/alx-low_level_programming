#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - length of string
 * @str: a variable
 * Return: an int
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}

/**
 * _strcpy - copy a string
 * @dest: destination
 * @src: source
 * Return: a char
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	for (count = 0; src[count]; count++)
		dest[count] = src[count];
	dest[count] = '\0';
	return (dest);
}

/**
 * new_dog - new dog
 * @name: the name
 * @age: the age
 * @owner: the owner
 * Return: the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggie;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	doggie = malloc(sizeof(dog_t));
	if (doggie == NULL)
		return (NULL);

	doggie->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (doggie->name == NULL)
	{
		free(doggie);
		return (NULL);
	}
	doggie->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (doggie->owner == NULL)
	{
		free(doggie);
		return (NULL);
	}
	doggie->name = _strcpy(doggie->name, name);
	doggie->age = age;
	doggie->owner = _strcpy(doggie->owner, owner);

	return (doggie);
}
