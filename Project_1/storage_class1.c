/*
 * storage_class1.c
 *
 *  Created on: 29 Mar 2022
 *      Author: neeth
 */
#include<stdio.h>

static void fun1(void)// static fun only to this file
{
  printf("fun1 called");

}
//the extern keyword is implicitly assumed for a function
// extern keyword extends the visibility of variable to the whole program,
