/*
 * ternary3.c
 *
 *  Created on: 1 Apr 2022
 *      Author: neeth
 */


#include <stdio.h>

int main()
{
	int age;
	char *classification;

	printf("Enter your age = ");
	scanf("%d",&age);

	classification =( (age <19) ? "kid" :
					((age<65)?  "adult ":
							"geezer"));

	printf("you are a %s\n",classification);
	return(0);
}

