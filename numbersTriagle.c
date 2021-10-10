#include <stdio.h>
int main() {

    // this will print a right angle triangle using numbres

    int num = 1 ;
    int i = 1  ;
    long long int value = 0;

    printf ("enter a number : ") ;
    scanf("%i" , &num) ;

    printf("right angle triangle : \n") ;

    while (i <= num) {
        value = value * 10 + i ;
        printf("%lli \n", value ) ;
        i++ ;
    }
}


/*
1
12
123
*/
