#include <stdio.h>

main () {
    int m ;

    printf("entrez le numero du mois : ") ;
    scanf("%i" , &m) ;

    switch (m){

    case 1 : printf("janvier") ; break ;
    case 2 : printf("fevirier ") ; break ;
    case 3 : printf("mars") ; break ;
    case 4 : printf("avril") ; break ;
    case 5 : printf("mai") ; break ;
    case 6 : printf("juin") ; break ;
    case 7 : printf("juillet") ; break ;
    case 8 : printf("aout") ; break ;
    case 9 : printf("septembre") ; break ;
    case 10 : printf("octobre") ; break ;
    case 11 : printf("nouvembre") ; break ;
    case 12 : printf("decembre") ; break ;
    default : printf("numero du mois invalide") ;

    }
}
