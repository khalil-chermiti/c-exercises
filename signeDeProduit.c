#include <stdio.h>

void main() {

    int a , b ;
    printf("entrer a , b :  ");
    scanf("%i %i" , &a , &b ) ;

    if ((a > 0) && (b > 0) || (a < 0) && (b < 0)) printf("le produit est positif") ;
    else if ((b < 0) || (a < 0)) printf("le produit eat negatif") ;
    else printf("le produit est nul") ;


}
