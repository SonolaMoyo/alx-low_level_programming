#include <stdio.h>
void fast_function(void) __attribute__((constructor));

/**
 * fast_function - Print some cool stuff before main
 */

void fast_function(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
