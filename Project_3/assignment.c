/*
 * assignment.c
 *
 *  Created on: 1 Apr 2022
 *      Author: neeth
 */

#include <stdio.h>

int main()
{
	int v = 0;

	printf("v equals %d\n",v);

/* Addition */
	v += 20;
	printf("v + 20 equals %d\n",v);

/* Subtraction */
	v -= 2;
	printf("v - 2 equals %d\n",v);

/* Division */
	v /= 3;
	printf("v / 3 equals %d\n",v);

/* Multiplication */
	v *= 4;
	printf("v * 4 equals %d\n",v);

/* Modulus */
	v %= 7;
	printf("v %% 7 equals %d\n",v);

	printf("Enter input value =");
	float value;
	scanf("%f",&value);
	printf("the value  is %.1f\n", value);
	value *= 5;
	printf("the value  %.1f\n", value);
	value /= 3;
	printf("the value  %.1f\n", value);

	return 0;
}


