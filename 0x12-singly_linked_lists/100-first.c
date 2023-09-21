#include<stdio.h>

/**
 * amonikevin - Apply the constructor attribute to amonikevin function so that it
 *   is executed before main
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
