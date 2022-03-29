/*
 * Register.c
 *
 *  Created on: 29 Mar 2022
 *      Author: neeth
 */

#include<stdio.h>
//register int x = 10; // global scope(error)
int main(void)
{
	register int i = 10;
	//int* a = &i; // register address can't be accessed
	printf("%d", i);
	int p = 10;
	register int* a = &p;
	//register static int* a = &i;    // two storage class together
	printf("%d", *a);
	getchar();
	return 0;
}
