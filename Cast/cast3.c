#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int r;

	srand((unsigned)time(NULL));
	r = rand();
	printf("%d is a random number.\n",r);

	return(0);
}

/*
 * cast3.c
 *
 *  Created on: 2 Apr 2022
 *      Author: neeth
 */


