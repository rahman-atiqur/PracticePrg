/*  Finding Reverse Number
 *  Md Atiqr Rahman
 *  Date: 19.09.2021
 *  -------------------------------
 */

#include<stdio.h>

 int main()
{
    int n, reverse=0, rem, j=0;

    printf("\n\n        Enter a number: ");
    scanf("%d", &n);

    printf("\n\n        Formula\n        -------\n        rem=n percent10\n        reverse=reverse*10+rem\n        n=n/10\n\n");

    while(n!=0)
    {
        rem=n%10;
        reverse=reverse*10+rem;
        n/=10;
        printf("\n        Step %d. -- rem=%d, reverse=%d, n=%d",++j,rem,reverse,n);
    }
    printf("\n\n        Reversed Number: %d\n\n",reverse);
return 0;
}
