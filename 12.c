//Calculating the first and last digit sum of a multiple digit integer
#include<stdio.h>
int main()

{
    int n, z, y;
    printf("Input number: ");
    scanf("%d", &n);
    z=n%10;
    while(n>9)
    {
        n=n/10;
    }
    y=n+z;
    printf("\nSum of first and last digit: %d\n\n\n", y);

    return 0;
}
