#include <stdio.h>

int main ()
{
    int a , result = 1;
    printf("enter a number  : ");
    scanf("%i" , &a) ;

    for (int i = 1 ; i <= a ; i++ ) {
        result *= i ;
    }

    printf("\nfactorial of %i! a is %i \n" , a , result) ;
}
