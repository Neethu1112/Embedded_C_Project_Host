/*
 * Ecercise.c
 *
 *  Created on: 4 Apr 2022
 *      Author: neeth
 */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct person{
	char name[25];
	int age;
};
struct person *allocatestruct(void);
void fetch(struct person *p);
void display(struct person *p);
int main()
{

	struct person *candid;
	candid = allocatestruct();
	fetch(candid);
	display(candid);
	return 0;
}
struct person *allocatestruct(void)
{
	struct person *p;
	p = (struct person *)(malloc(sizeof(struct person)));
	if(p == NULL)
	{
		perror("no structure allocated");
		exit(1);
	}
	return(p);
}
void fetch(struct person *p)
{
	printf("enter name: ");
	scanf("%s",p->name);
	printf("enter age: ");
	scanf("%d",&p->age);
}
void display(struct person *p)
{
	printf("%s has %d age", p->name,p->age);
}
