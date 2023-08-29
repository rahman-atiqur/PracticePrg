/*  Finding Factors of a Number
 *  Md Atiqr Rahman
 *  Date: 19.09.2021
 *  -------------------------------
 */
#include <stdio.h>
int main() {
    int num, i;
    printf("\n\n        Enter a positive integer: ");
    scanf("%d", &num);

    printf("\n\n        Factors of %d are: ", num);
    for (i = 1; i <= num; ++i) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n\n");
    return 0;
}
