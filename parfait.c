#include <stdio.h>
#include <stdbool.h>

void main () {

    // procedure saisie

    void saisie(int *n ) {
        do {
            printf("entrer un entier : ") ;
            scanf("%i" , n) ;
        } while(n < 0 ) ;
    }

    // fonction parfait

    bool parfait(int n) {
        int somme = 0 ;

        for (int i = 1 ; i < n ; i++ ) {
            if (n % i == 0) somme = somme + i ;
        }

        if (n == somme ) return true ;
        if (n != somme ) return false ;
    }


    int n ;

    saisie(&n) ;

    printf("les nombres parfait sont : ") ;

    for (int i = 1 ; i <= n ; i++ ) {

        if (parfait(i) == true ) printf("%i ; " , i ) ;

    }


}




// bool
// enum
// int (1 / 0)
