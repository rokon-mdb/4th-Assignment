//Display the product table of an integer number
#include<stdio.h>
int main()
{
    int i=1, n, x;
    printf("Input num: ");
    scanf("%d", &n);

    while(i<=9)
    {
        x=i*n;
        printf(" %d x %d  = %d \n", n, i, x);

        i++;
    }

    printf(" %d x 10 = %d \n", n, n*10);




    return 0;
}
