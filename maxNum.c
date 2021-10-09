#include <stdio.h>

main()
{
    int max , a ,b ,c ;

    a = 2 ;
    b = 5 ;
    c = 9 ;

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




