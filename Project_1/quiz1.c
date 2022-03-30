/*
 * quiz1.c
 *
 *  Created on: 30 Mar 2022
 *      Author: neeth
 */
#include<stdio.h>
int main(void)
{
	int i; //garbage
	int j =20;
	for(i =0; i<5;i++)
	{

		int i =10; // this i has no effect on looping
		static int j=10; // retain value of j even if out of scope of loop , but no effect for outside j

		printf("\n i= %d",i);
		printf("\n j= %d",j);
		i++;
		j++;
	}
	printf("\n after loop value of j= %d",j);
	return 0;
}
