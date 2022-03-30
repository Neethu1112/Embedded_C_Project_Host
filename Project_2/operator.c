#include <stdio.h>
int main(void)
{
    int arr[] = {10, 20};
    int *p = arr;
    ++*p; //11,20

    *p++;//11,20

    *++p;//11,20
    printf("arr[0] = %d, arr[1] = %d, *p = %d",
                          arr[0], arr[1], *p);

    printf("arr[0] = %d, arr[1] = %d, *p = %d",
                              arr[0], arr[1], *p);

    printf("arr[0] = %d, arr[1] = %d, *p = %d",
                                 arr[0], arr[1], *p);
    //the compilers read parameters of printf() from right to left.
    //Expressions written in sizeof() are never executed.
    return 0;
}
