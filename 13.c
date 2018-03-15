//Finding the sum of all digit of a integer number
#include<stdio.h>

int main ()

{
    int n, z=0, y;
    printf("Input any number: ");
    scanf("%d", &n);
    while(n!=0)
    {
        y=n%10;
        n=n/10;
        z=z+y;
    }
    printf("\nSum of digits: %d\n\n", z);




    return 0;
}
