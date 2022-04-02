/*
 * cast1.c
 *
 *  Created on: 2 Apr 2022
 *      Author: neeth
 */

#include <stdio.h>
#include <math.h>

int main()
{
	int a,b;
	float c;

	a = 10; b = 3;
	c = (float)a/b;
	printf("%d/%d = %.2f\n",a,b,c);

	return(0);
}


