/*
 * bitwise.c
 *
 *  Created on: 30 Mar 2022
 *      Author: neeth
 */
#include<stdio.h>
//Function to return the only odd
// occurring element
int fun(int arr[],int n)
{
	int res=0,i;
	for (i =0; i<n;i++)
		res ^= arr[i];
	return res;
}
int main(void)
{
	int arr[6] = {12,12,12,11,11};
	int n = sizeof(arr)/sizeof(arr[0]);
	int odd_num =fun(arr,n);
	printf("odd num =%d\n",odd_num);
	int x = 19;
	(x & 1) ? printf("Odd") : printf("Even");

	unsigned int y = 1;
	 printf("Signed Result %d \n", ~y);
	 printf("Unsigned Result %ud \n", ~y);

	 int a = 10, b = 20, c = 30;

	    // (c > b > a) is treated as ((c  > b) > a), associativity of '>'
	    // is left to right. Therefore the value becomes ((30 > 20) > 10)
	    // which becomes (1 > 10)
	    if (c > b > a)
	        printf("TRUE");
	    else
	        printf("FALSE");

	    int p= 10;

	    int q = (++p,p++);
	    int r = (p++,++p);
	    printf("\nq=%d, r=%d", q,r);

	    // a negative and b positive
	   // sign of left operand is appended to result in case of modulus operator in C.
	       int num1 = -3, num2 = 8;
	       printf("\n num1 % num2 =%d", num1 % num2);

	       int value = 10;
	       ++value = 20; // works
	       //value++ =20//not work
	       getchar();
	        return 0;



}
