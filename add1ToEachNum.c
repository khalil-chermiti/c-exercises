#include <stdio.h>

void main () {

    int a , u , d , c , m;
    printf("entrer un nombre de 4 chiffres : ") ;
    scanf("%i" , &a) ;


    m = a / 1000 ;
    c = a % 1000 / 100 ;
    d = a % 1000 % 100 / 10 ;
    u = a % 1000 % 100 % 10 ;

    if (m == 9) m = 0 ;
    else m = m + 1 ;
    if (c == 9) c = 0 ;
    else c = c + 1 ;
    if (d == 9) d = 0 ;
    else d = d + 1 ;
    if (u == 9) u = 0 ;
    else u = u + 1 ;

    printf("N = %i\n" , a) ;
    printf("R = %i" , (m *1000) + (c *100) + (d * 10) + u ) ;

}
