/*
 * array.c
 *
 *  Created on: 4 Apr 2022
 *      Author: neeth
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *generate(void);

int main()
{
	int x;
	int *a;

	puts("Here are 10 random numbers:");
	a = generate();
	for(x=0;x<10;x++)
		printf(" %3d",a[x]);
	putchar('\n');

	return(0);
}

int *generate(void) // array is creating in function  and memory address of generated array passing, so pointer function is using
					//because it returns memory location.
{
	static int array[10]; // static because content will not lose after return
	int x;

	srand((unsigned)time(NULL));
	for(x=0;x<10;x++)
		array[x] = rand() % 100 + 1;

	return(array);
}



