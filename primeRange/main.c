// Finding Prime Numbers in a range
// Md Atiqur Rahman
// Date: 16.09.2021
// -------------------------------
#include <stdio.h>
#include <stdlib.h>

int isPrime(int nNum)
{
    int k, flag=0;

    for (k=2; k<=nNum/2; k++)
        {
        if (nNum%k==0)
            {
                flag=1;
                break;
            }
        }
return flag;
}
// * End of function **

int main()
{
    printf("\n\n<<< Welcome to find Prime Numbers in a range >>>\n\n\n");

    int i,j=1,num1,num2;

    printf("Enter 1st positive integer number: ");
    scanf("%d",&num1);

    printf("\n");
    printf("Enter 2nd positive integer number: ");

    scanf("%d",&num2);

    printf("\n\n      Prime Numbers are:\n\n");


    // swap numbers
    if (num1>num2)
    {
        int temp=num2;
        num2=num1;
        num1=temp;
    }


     //Checking prime or not

    for (i=num1; i<=num2;i++)
    {

        if (i==1){

            continue;
            }

        if (isPrime(i)==0){
           printf("      %d.  ---  %d\n",j++,i);
        }

    }

    printf("\n\n\n");

  // *** End of coding ****

    return 0;
}
