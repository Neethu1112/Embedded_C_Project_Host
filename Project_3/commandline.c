/*
 * commandline.c
 *
 *  Created on: 1 Apr 2022
 *      Author: neeth
 */

#include<stdio.h>
int main(int argc, char *argv[])
{
	int x;
	printf("there were %d command line arguments\n",argc);
	for(x =0;x <argc ;x++ )
	{
		printf("%2d : %s\n",argc,argv[x]);
	}
	if(argc <2)
	{
		puts("enter file name \n");
		//gets(argv[1]);
		return (1);
	}
	printf("argument is %s\n",argv[1]);
	return 0;
}
