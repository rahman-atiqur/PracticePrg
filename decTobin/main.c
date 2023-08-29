/*  Dec to Binary conversion
 *  Md Atiqr Rahman
 *  Date: 19.09.2021
 *  -------------------------------
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,m,i,arr[10];
    printf("\n\n        Enter a number to convert into Binary: ");
    scanf("%d",&n);
    m=n;
    for (i=0; n>0; i++)
    {
        arr[i]=n%2;
        n/=2;
    }

    printf("\n\n        %d = ",m);

    for (i=i-1; i>=0; i--)
    {
        printf("%d", arr[i]);
    }

    printf("\n\n");

    return 0;
}
