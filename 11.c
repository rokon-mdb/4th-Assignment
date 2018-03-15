//Finding the first and last digit of a multiple digit integer number
#include<stdio.h>

int main()
{
    int n, z;
    printf("Input num: ");
    scanf("%d", &n);
    z=n%10;
    while(n>9)
    {
        n=n/10;
    }

    printf("\nFirst digit: %d  \nLast digit: %d \n\n\n", n, z);




    return 0;
}
