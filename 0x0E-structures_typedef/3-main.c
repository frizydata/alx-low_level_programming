#include <stdio.h>
#include "dog.h"

/**
 * main - the main fuction
 * Return: Always 0 (Success)
 */

int main(void)
{
	dog_t my_dog;

	my_dog.name = "Poppy";
	my_dog.age = 3.5;
	my_dog.owner = "Bob";
	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
	return (0);
}
