#include <stdio.h>

int main ()
{
    int a ;
    printf("enter a number : ") ;
    scanf("%i" , &a) ;

    // iterating through numbers that we want to print
    for (int i = 1 ; i <= a ; i++ ) {

        int j = i ;

        // print number i , j times
        while (j > 0) {
            printf("%i" , i) ;
            j-- ;
        }

        printf("\n");
    }
}
