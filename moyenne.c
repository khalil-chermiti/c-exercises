#include <stdio.h>

int main ()
{
    int n1 , n2 , n3 , c1 , c2 , c3 , moy ;

    c1 = 3 ;
    c2 = 2 ;
    c1 = 1 ;

    printf ("donner 1ere note : ") ;
    scanf("%i" , &n1) ;

    printf ("donner 2eme note : ") ;
    scanf("%i" , &n2) ;

    printf ("donner 3eme note : ") ;
    scanf("%i" , &n3) ;

    moy = ((n1 * c1) + (n2 * c2) + (n3 * c3)) / (c1 + c2 +c3) ;

    printf("la moyenne est : %i" , moy) ;

}
