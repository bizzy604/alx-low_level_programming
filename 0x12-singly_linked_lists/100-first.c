#include<stdio.h>

/**
 * amonikevin - Apply the constructor attribute to amonikevin()
 */
void amonikevin(void) __attribute__ ((constructor));

/**
 * amonikevin - implementation of amoni kevin
 */
void amonikevin(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
