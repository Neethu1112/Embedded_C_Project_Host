/*
 * pointer.c
 *
 *  Created on: 28 Mar 2022
 *      Author: neeth
 */

#include <stdio.h>
int (*fp)();
int func(void) { printf("hello\n");
return 0;}

int main()
{


     fp = func;
    (*fp)();
    // fp(); // This will also call func
    return 0;

}
