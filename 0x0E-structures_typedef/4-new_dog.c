#include "dog.h"
#include <stdlib.h>

int strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen -> finds the length of a string
 * @str: string to be measured
 * Return: length of the string
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcopy -> copies a string pointed to by src
 * to a buffer pointed by destination
 * @dest: buffer storing the string copy
 * @src: source string
 * Return: poinetr to dest
 */
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog -> creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: ownero of the dog
 * Return: new struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *bones;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	bones = malloc(sizeof(dog_t));
	if (bones == NULL)
		return (NULL);

	bones->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (bones->name == NULL)
	{
		free(bones);
		return (NULL);
	}

	bones->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (bones->owner == NULL)
	{
		free(bones->name);
		free(bones);
		return (NULL);
	}

	bones->name = _strcopy(bones->name, name);
	bones->age = age;
	bones->owner = _strcopy(bones->owner, owner);

	return (bones);
}
