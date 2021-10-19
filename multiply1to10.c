#include <stdio.h>

void main(){
    int a ;
    printf("entrer un nombre : ");
    scanf("%i" , &a) ;

    for(int i = 1 ; i <= 10 ; i++ ){
        printf("%i * %i = %i \n" , a , i , a*i );
    }
}
