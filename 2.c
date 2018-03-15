//showing all natural number in reverse from n to 1
#include<stdio.h>

int main()
{
    int n, i=1, s;
    printf("Input N: ");
    scanf("%d", &n);
    printf("Natural numbers from %d-1 in reverse: ", n);
    s=n-1;
    while(i<=s)
    {

        printf("%d,", n);
        i++;
        n--;
    }
    printf("%d\n\n", n);


    return 0;
}
