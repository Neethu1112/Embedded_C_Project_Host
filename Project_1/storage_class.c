/*
 * storage_class.c
 *
 *  Created on: 29 Mar 2022
 *      Author: neeth
 */
#include<stdio.h>
#include"storage_class1.c"
extern int var = 0;
int initializer(void)
{
    return 50;
}
int fun (void)
{
	//static int i = initializer(); // should initialize with constant literals
	static int i; // retain the value of static var throughout program
	i++;
	return i;
}
int main(void)
{
	printf("\n%d",fun());
	printf("\n%d",fun());
	printf("\n%d",fun());
	fun1();
	var = 10;
	printf("\n var = %d",var);
	return 0;
}

