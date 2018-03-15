//Find the Sum of all natural numbers from 1 to n
#include<stdio.h>
int main()
{
    int i=1, n,x=0;
    printf("Input upper limit: ");
    scanf("%d", &n);
    printf("Sum of natural numbers 1-%d: ", n);

    while(i<=n)
    {
        x=x+i;
        i++;


    }

    printf("%d\n\n", x);


    return 0;
}
