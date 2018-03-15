//Finding number of digit of a integer number
#include<stdio.h>
int main()
{
    int n, i=1, z=0;

    printf("Input num: ");
    scanf("%d", &n);

    while(n!=0 )
    {
        n=n/10;
        z++;


    }

    printf("Number of digits: %d \n\n\n", z);



    return 0;
}
