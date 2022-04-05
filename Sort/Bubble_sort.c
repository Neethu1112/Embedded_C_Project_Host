/*
 * Bubble_sort.c
 *
 *  Created on: 4 Apr 2022
 *      Author: neeth
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main()
{
	int numbers[SIZE];
	int x,outer,inner,temp;

/* populate the array */
	srand((unsigned)time(NULL)); // random numbers
	for(x=0;x<SIZE;x++)
		numbers[x] = rand() % 100 + 1; // numbers between 1 to 100

/* Display the unsorted array */
	puts("Unsorted array:");
	for(x=0;x<SIZE;x++)
		printf(" %3d",numbers[x]);
	putchar('\n');

/* Sort the array */
	for(outer=0;outer<SIZE;outer++)
		for(inner=outer+1;inner<SIZE;inner++)
		{
			if( numbers[outer] > numbers[inner])
			{
				temp = numbers[inner];
				numbers[inner] = numbers[outer];
				numbers[outer] = temp;
			}
		}

/* Display the sorted array */
	puts("Sorted array:");
	for(x=0;x<SIZE;x++)
		printf(" %3d",numbers[x]);
	putchar('\n');

	return(0);
}


