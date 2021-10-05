#include <stdio.h>

int main()
{
    int a , b , c ;

    printf("entrer un nommbre a : ") ;
    scanf("%i", &a) ;

    printf("entrer nombre b : ");
    scanf("%i", &b) ;

    printf("avant permutation a : %i b : %i \n" , a , b) ;

    c = a ;
    a = b ;
    b = c ;

    printf("apres permutation a : %i b : %i \n" , a , b) ;

}
