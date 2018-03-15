//Showing all lowercase alphabet a-z
#include<stdio.h>
int main()
{
    int i='a';

    printf("Alphabets: ");

    while(i<='y')
    {
        printf("%c,", i);
        i++;
    }


    printf("z\n");



    return 0;
}
