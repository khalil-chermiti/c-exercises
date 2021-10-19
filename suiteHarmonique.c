 #include <stdio.h>

 void main () {

    int a ;
    float s ;

    printf("entrer un nombre : ") ;
    scanf("%i" , &a) ;

    for (int i = 1 ; i <= a ; i++){
        s = s + 1 / (float)i;
    }

    printf("%.2f" , s) ;
 }

 // type casting
