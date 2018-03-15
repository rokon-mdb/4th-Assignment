//showing all natural number from 1 to n
#include<stdio.h>

int main()

{
    int i=1, n, x;
    printf("Input upper limit: ");
    scanf("%d", &n);
    printf("Natural numbers from 1 to %d: ", n);
    x=n-1;
    while(i<=x)
    {
        printf("%d,", i);
        i++;
    }
    printf("%d\n\n", n);

    return 0;
}
