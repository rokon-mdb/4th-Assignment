//find all Odd number from 1 to n
#include<stdio.h>

int main()
{
    int i=1, n,x;
    printf("Input upper limit: ");
    scanf("%d", &n);
    printf("Odd numbers between 1 to %d: ", n);

    while(i<=n-2){
        if(i%2!=0)
        printf("%d,", i);

       i++;
      }

      if((n-1)%2!=0)
        printf("%d\n\n", (n-1));
      else
        printf("%d\n\n", n);

    return 0;
}
