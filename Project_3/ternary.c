/*
 * ternary.c
 *
 *  Created on: 1 Apr 2022
 *      Author: neeth
 */

#include <stdio.h>

int main()
{
	int a,b,larger;

	printf("Enter a value: ");
	scanf("%d",&a);
	printf("Enter another value: ");
	scanf("%d",&b);

	/*
	 * if( a > b )
		larger = a;
	else
		larger = b;
	 */
	larger = ( a > b )? a : b ;

	printf("%d is the larger value.\n",larger);

	return(0);
}


