#include <stdio.h>
#include <stdlib.h>

/**
 * before_main - print something before main
 */

void __attribute__((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
