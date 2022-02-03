#include <stdio.h>

void main() {

    int n ;

    printf("entrer un nombre : ");
    scabf("%i" , n) ;

    int somme = 1 ;
    if (n == 0 ) somme = 0 ;
    if(n != 0 ) {
        for (int i = 1 ; i <= n ; i++ ) {
             somme = somme * i ;
        }
    }

    printf("resultat = %i" , somme) ;
}
