#include <stdio.h>


void main () {

    int a , b , c ;

    // fonction somme

    int somme (int a ,int b ,int c) {
        return a + b + c ;
    }

    //fonction factoriel

    int fact (int n ) {
        int res = 1;

        for(int i = 1 ; i <= n ; i++){

            res = res * i ;
        }

        return res ;
    }

    // saisie // PPA

    void saisie (int *n) {
        printf("entrer un nombre : ") ;
        scanf("%i" , n) ;
    }

    // PPA

    saisie(&a) ;
    saisie(&b) ;
    saisie(&c) ;


    printf("somme : %i \n" ,somme(a,b,c)) ;

    printf("factoriel de %i : %i \n" , a , fact(a)) ;
    printf("factoriel de %i : %i \n" , b , fact(b)) ;
    printf("factoriel de %i : %i \n" , c , fact(c)) ;

}
