/*
 * Excercise1.c
 *
 *  Created on: 4 Apr 2022
 *      Author: neeth
 */

#include<stdio.h>
int *fun(void)
{
	static int array[5] ={2,3,5,7,9};
	return array;
}
int main()
{
	int x;
	int *value = fun();
	for(x =0; x<5;x++)
		printf("array[x] = %d\n",value[x]);

	return 0;
}
