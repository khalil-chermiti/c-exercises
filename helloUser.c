#include <stdio.h>

int main()
{
    char nom[30] ;
    char prenom[20] ;
    char mois[20] ;

    int jour , annee ;

    printf("entrer ton nom : ") ;
    scanf("%s" , &nom) ;

    printf("entrer ton prenom : ") ;
    scanf("%s" , &prenom) ;

    printf("entrer le jour de naissance : ") ;
    scanf("%i" , &jour) ;

    printf("entrer mois de naissance : ") ;
    scanf("%s" , &mois) ;

    printf("entrer l'annee de naissance : ") ;
    scanf("%i" , &annee) ;

    printf("bonjour %s %s \n" , nom , prenom) ;
    printf("ton date de naissance est : %i %s %i" , jour , mois , annee) ;
}
