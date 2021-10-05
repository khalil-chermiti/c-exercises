#include <stdio.h>

int main()
{
    int t , m , h , s ;

    printf("entrer le nombre de secondes : ") ;
    scanf("%i" , &t) ;

    h = t / 3600 ;
    m = ( t % 3600 ) / 60 ;
    s = ( t % 3600 ) % 60 ;

    printf("%i seondes  = %i heures %i munites %i secondes" , t , h , m , s ) ;
}
