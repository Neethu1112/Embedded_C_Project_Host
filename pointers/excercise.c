/*
 * excercise.c
 *
 *  Created on: 4 Apr 2022
 *      Author: neeth
 */
#include<stdio.h>
#include<ctype.h>

void converter(char *str);

int main()
{

	char string[65];

	printf("Enter input: ");
	fgets(string,65,stdin);


	converter(string);
	printf("converted string: ");
	printf("%s",string);
	return 0;
}
void converter(char *str)
{
	while(*str)
	{
		*str = toupper(*str);
		if(*str == ' ')
			*str = '_';
		str++;
	}
}
