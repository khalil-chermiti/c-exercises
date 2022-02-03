#include <stdio.h>

void main () {

    int x , n , p = 1;
    float s = 0 ;

    // saisie de n

    void saisie(int *n ) {
        do {
            printf("entrer la puissance : ") ;
            scanf("%i" , n) ;
        } while(n < 0 ) ;
    }

    // procedure puissance

    void puissance (int *p, int n) {

        if (n == 0) *p = 1 ;
        if (n == 1) *p = x ;

        if (n > 1) {
            for (int i = 2 ; i <= n ; i++ ) {
                *p = *p * x ;
            }
        }
    }


    //fonction factoriel

    int fact (int n ) {

        int res = 1;

        for(int i = 1 ; i <= n ; i++){

            res = res * i ;
        }
        printf("%i | \n" , res) ;
        return res ;
    }


    // main program


    printf("entrer un numero : ") ;
    scanf("%i" , &x);

    saisie(&n);

    for (int i = 0 ; i < n ; i++ ) {

        puissance(&p , i) ;

        printf("%i / " , p) ;

        s = s + ((float)p / fact(i+1)) ;

        printf(" s: %.0f \n" , s) ;


    }

    printf("suite : %.0f" , s) ;
}


/*
int *pointer = variable ;
hoisting in c how declaration works
accessing the value of a pointer : *pointer
accessing the address of the pointer : pointer
*/
