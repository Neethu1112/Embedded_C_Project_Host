/*
 * extern1.c
 *
 *  Created on: 2 Apr 2022
 *      Author: neeth
 */

#include <stdio.h>
int y;
void f(void)
{
	int x = -1;
	y =-1;
	printf("In function f() x = %d\n",x);
}

int main()
{
	int x = 0;
	y= 0;
	printf("In the main() function x = %d\n",x);
	printf("In the main() function y = %d\n",y);
	f();
	printf("In the main() function x = %d\n",x);
	printf("In the main() function y = %d\n",y);


	return(0);
}

