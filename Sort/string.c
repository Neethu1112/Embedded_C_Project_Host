/*
 * string.c
 *
 *  Created on: 4 Apr 2022
 *      Author: neeth
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 65

int compare(const void *a,const void *b);

int main(void)
{

	int length;
	char string [SIZE];
/*get the string*/
	printf("Enter input string:\n");
	fgets(string,SIZE,stdin); // to avoid garbage, reads a line from the specified stream
							//and stores it into the string pointed to by str
	length = strlen(string);

/*sort the  string*/
	qsort(string,length,sizeof(char),compare);
	printf("sorted array");
	printf(" %s",string);
	return 0;
}
int compare(const void *a,const void *b)
{
	return(*(char*)a -*(char*)b);
}
