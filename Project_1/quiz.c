/*
 * quiz.c
 *
 *  Created on: 30 Mar 2022
 *      Author: neeth
 */

#include<stdio.h>
int var =20;
extern int var1 =0;
int *ptr ;	// global ptr initialized to 0
int main(void)
{
	int var1;				//declares and define with garbage value
	extern int var2;		// only declares
	int var = var;			//First var is declared, then value is assigned to it.
							//As soon as var is declared as a local variable, it hides the global variable var.
	printf("\n var = %d", var);
	var1 = 10;					// changing extern var1 from 0 to 10
	printf("\n var1 = %d", var1);
	int x =032;
	printf("\n x = %d",x); // 032 is octal ,3*8+2=26

	int *ptr1 = NULL;
	int *ptr2;			// local pointer initialized to garbage value
	printf("\n ptr=%d,ptr1= %d",ptr,ptr1);
	if(ptr == ptr1)
		printf("\n both pointers initialized to same value");
	printf("\n ptr2=%d,ptr1= %d",ptr2,ptr1);
	if(ptr2 == ptr1)
		printf("\n both pointers initialized to same value");

	return 0;

}
