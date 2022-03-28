/*
 * variable.c
 *
 *  Created on: 28 Mar 2022
 *      Author: neeth
 */


#include <stdio.h>
int main()
{
    static int i = 5;
    if (--i){
        printf("%d ", i);
        main(10);
    }
}
