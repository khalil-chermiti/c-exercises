#include <stdio.h>

void main (){

    int n , a ;
    printf("entrer le nombre de notes : ") ;
    scanf("%i" , &n);

    int max = 0 ;
    int min = 0 ;
    int somme = 0 ;

    if ((n > 0) && (n <= 20 )) {

        for(int i = 1 ; i <= n ; i++) {
            printf("entrer le nombre numero %i: " , i) ;
            scanf("%i" , &a) ;

            // seulement la premiere repetition
            if (i == 1) min = a ;

            if (max < a) max = a ;
            if (min > a) min = a ;
            somme += a ;
        }

        printf("la meilleur note est : %i\n" , max ) ;
        printf("la mauvaise note est : %i\n" , min ) ;
        printf("la moyenne est : %i\n" , somme / n ) ;
    }

}
