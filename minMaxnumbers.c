#include <stdio.h>
int main()
{
    // find the max and min value between three inputs

    int a , b , c , min , max ;

    printf("enter 3 numbers : ") ;
    scanf("%i %i %i" , &a , &b , &c) ;

    max = a ;
    min = b ;

    if (b > a) {
        max =  b ;
        min = a ;
    }
    if ( c > max ) {
        max = c ;
    }
    if (c < min) {
        min = c ;
    }
    printf ("max is : %i min is : %i" , max , min ) ;

}

