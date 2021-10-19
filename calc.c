#include<stdio.h>

main()
{

char o;
int a , b;

printf("donnez le 1 er entier :");
scanf("%i", &a);

printf("donnez le 2 eme entier :");
scanf("%i", &b);

printf("donnez l'opperation a faire :");
scanf("%s" , &o) ;

switch(o) {
    case '+' : printf("la somme de %i et %i est :%i", a, b, (a+b));break;
    case '-' :printf("la soustraction de %i et %i est :%i",a,b, (a-b));break;
    case '*' :printf("la multiplication de %i et %i est :%i", a, b,(a*b));break;
    case '/' : if (b!=0)
    printf("la divisionde %i et %i est :",a,b,(a/b));
    else
        printf("la division sur 0 est impossible");break;
    default :
        printf("opperation non trouvable");
}

}
