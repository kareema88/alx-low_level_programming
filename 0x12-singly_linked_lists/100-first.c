#include <stdio.h>

/**
 * prior_main - print an expression before main function is excuted
 */

void __attribute__ ((constructor)) prior_main()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
