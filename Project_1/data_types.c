#include<stdio.h>
int main(void)
{
	float x = 0.432;
	if (x == 0.432)
		printf("IF");
	else if (x == 0.432f)
		printf("ELSE IF");
	else
		printf("ELSE");


	signed a;
	signed b;

	// size of a and b is equal to the size of int
	printf("\n The size of a is %d\n", sizeof(a));
	printf("\n The size of b is %d", sizeof(b));

	int z;
	char y;
	z = -1;
	y = -2;
	printf("\n z is %d and y is %d", z, y);

	//signed float a;
    //short float b;
	//short double a;
	 //signed double b;

	return (0);
}
