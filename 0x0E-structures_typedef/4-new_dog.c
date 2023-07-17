#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - finda the length of a string
 * @s: string to measured
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int length;

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}

/**
 * *_strcpy - copies the string pointed to by src
 * including null byte to the buffer pointed to by dest
 * @dest: pointer to the buffer storing the string
 * @src: source of string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, length;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (length = 0; length < len; length++)
	{
		dest[length] = src[length];
	}
	dest[length] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
