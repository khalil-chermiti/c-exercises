#include <stdio.h>

void main()
{
    int max , a ,b ,c ;

    printf("entrer a , b , c : ") ;
    scanf("%i %i %i" , &a , &b , &c) ;

    max = a ;

    if ( b > a)
    {
        max = b ;
    }
    if( c > max )
    {
        max = c ;
    }

    printf("la valeur maximale est %i " , max) ;
}




