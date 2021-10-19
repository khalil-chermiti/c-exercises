#include <stdio.h>

main() {

    int p , tarif ;

    printf("entrer le poids de lettre en grammes : ") ;
    scanf("%i" , &p) ;

    if (p <= 20)
        tarif = 250 ;
    else
        if(p < 50) tarif = 500 ;
    else
        tarif = 1000 ;

    printf("le tarif est : %i" , tarif);
}


