/*
 * static_global.c
 *
 *  Created on: 28 Mar 2022
 *      Author: neeth
 */
//In C, static and global variables are initialized by the compiler itself.
//Therefore, they must be initialized with a constant value.
#include <stdio.h>
int fun(int x)
{
    return (x+5);
}

int y = fun(20); //error

int main()
{
    printf("%d ", y);
}
