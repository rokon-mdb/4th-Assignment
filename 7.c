//find the sum of all even number from 1 to n
#include<stdio.h>
int main()

{
    int i=1, n,x=0;
    printf("Input upper limit of even number: ");
    scanf("%d", &n);
    printf("Sum of odd numbers from 1-%d:", n);

    while(i<=n)
    {
        if(i%2==0)
        {
            x=x+i;
        }

        i++;
    }
    printf(" %d\n\n", x);


    return 0;
}
