/*
 * variable.c
 *
 *  Created on: 28 Mar 2022
 *      Author: neeth
 */

#include<stdio.h>
#include"variable.h"

void function()
{
	int x = 20;//local variable
	static int y = 20;//static variable
	extern int z;
	x = x + 10;
	y = y + 10;
	z = z+10;
	printf("\n%d,%d, %d",x,y,z);
}

int main(void )
{

	function();
	function();
	function();
}
