
/*
 *  Finding Factorial

 *  Md Atiqr Rahman
 *  Date: 18.09.2021
 *  -------------------------------
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,fact=1;


    printf("\n\n      Enter an integer: ");
    scanf("%d",&num);

    printf("\n\n");

    for (i=1; i<=num; i++ )
    {
        fact=fact*i;
    }

    printf("        Factorial of %d is %d",num,fact);

    printf("\n\n");
    return 0;
}
