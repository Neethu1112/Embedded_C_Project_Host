/*
 * cast2.c
 *
 *  Created on: 2 Apr 2022
 *      Author: neeth
 */

#include <stdio.h>
#include<stdlib.h>
#include <math.h>

int main()
{
	int a;
	float aroot;

	printf("Type an integer: ");
	scanf("%d",&a);
	aroot = sqrt(abs(a));
	printf("The square root of %d is %f\n",a,aroot);

	return(0);
}


