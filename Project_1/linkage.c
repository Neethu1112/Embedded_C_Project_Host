/*
 * linkage.c
 *
 *  Created on: 28 Mar 2022
 *      Author: neeth
 */


#include<stdio.h>
static int animals = 8;
const int i = 5;

int call_me(void)
{
    printf("%d %d", i, animals);
    return 0;
}
