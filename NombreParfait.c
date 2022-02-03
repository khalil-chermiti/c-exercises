#include <stdio.h>
#include <stdbool.h>

// procedure saisie

void saisie (int *n) {

    do {

        printf("entrer un numero : ") ;
        scanf("%i" , n) ;

    }while(n < 0) ;

}

// fonction parfait
bool parfait (int n) {
    int s = 0 ;

    for (int i = 1 ; i < n ; i++) {
        if (n % i == 0 ) s = s + i ;
    }

    if (s == n) return true ;
    if (s != n) return false ;
}

void main() {

    int n ;



    saisie(&n) ;



    if (parfait(n) == true ) printf("le nombre %i est parfait" , n) ;
    if (parfait(n) == false ) printf("le nombre %i n'est pas parfait" , n) ;

}

// 6 / 28 / 496 / 8128



/*
* variable (L ,G) ;
* PPV
* PPA
*/
