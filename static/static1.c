/*
 * static1.c
 *
 *  Created on: 2 Apr 2022
 *      Author: neeth
 */
#include <stdio.h>

void f(void)
{
	static  int x = 0;

	printf("Value of x is %d\n",x);
	x++;
	printf("Value of x is %d\n",x);
}

int main()
{
	f();
	f();

	return(0);
}



