/*  FSum of digits of a Number
 *  Md Atiqur Rahman
 *  Date: 19.09.2021
 *  -------------------------------
 */
#include <stdio.h>

int main()
{

    int n,rem,sumRem=0;

    printf("\n\n        Enter a number: ");
    scanf("%d",&n);
    while (n!=0)
    {
        rem=n%10;
        sumRem+=rem;
        n/=10;
    }
    printf("\n\n        Sum of digits: %d\n\n",sumRem);
    return 0;
}
