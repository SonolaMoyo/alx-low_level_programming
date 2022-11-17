#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

int _strlen(char *s);
/**
 * new_dog - creates a new dog (struct dog)
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of new dog
 * Return: pointer of new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
    int i;
    dog_t *newDog;

    newDog = malloc(sizeof(dog_t));
    if (newDog == NULL)
        return NULL;

    newDog->name = malloc(_strlen(name) + 1);
    if (newDog->name == NULL)
    {
        free(newDog);
        return (NULL);
    }

    newDog->owner = malloc(_strlen(owner) + 1);
    if (newDog->owner == NULL)
    {
        free(newDog->name);
        free(newDog);
        return (NULL);
    }

    for (i = 0; name[i] != '\0'; i++)
        newDog->name[i] = name[i];
    newDog->name[i] = '\0';

    for (i = 0; owner[i] != '\0'; i++)
        newDog->owner[i] = owner[i];
    newDog->owner[i] = '\0';

    newDog->age = age;

    return (newDog);
}

/**
 * _strlen - Calculate length of the string
 * @s: Pointer to string
 * Return: Length of string
 */
int _strlen(char *s)
{
    int i;

    for (i = 0; s[i] != '\0'; i++)
    {
    }
    return (i);
}