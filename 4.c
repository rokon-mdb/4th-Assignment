//Finding all Even numbers from 1 to n
#include<stdio.h>

int main()

{
    int n, x, i=1;
    printf("Input range: ");
    scanf("%d", &n);
    printf("Even numbers between 1 to %d: ", n);
    x=n-2;
    while(i<=x)
    {
        if(i%2==0)
        {
            printf("%d, ", i);
        }
        i++;
    }
    if((n-1)%2==0)
        printf("%d\n", n-1);
    else
         printf("%d\n", n);

    return 0;
}
