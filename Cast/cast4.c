/*
 * cast4.c
 *
 *  Created on: 2 Apr 2022
 *      Author: neeth
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *m;

	m = (int *)malloc(16 * sizeof(int));
	if( m == NULL)
		puts("Failed to allocate memory");
	else
		puts("Storage for 16 integers allocated");

	return(0);
}


