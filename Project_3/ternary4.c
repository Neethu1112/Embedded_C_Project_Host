/*
 * ternary4.c
 *
 *  Created on: 1 Apr 2022
 *      Author: neeth
 */

#include<stdio.h>
int main()
{
	int input;
	printf("Enter a positive integer greater than Zero= ");

	scanf("%d", &input);
	if(input < 0)
		printf("oops..Please enter number greater than 0");
	else
		((input % 2) == 0) ? printf("input number is even") : printf("input number is odd");
	return 0;
}
