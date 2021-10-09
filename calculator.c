#include <stdio.h>

// this is a small calculator built using the switch case ;

int main (){

    char sign ;
    float a , b , result;

    printf("enter the sign of the operation you want to perform [ * , / , + , - ] : ") ;
    scanf("%c" , &sign) ;

    printf("enter num1 and num2 : ") ;
    scanf("%f %f" , &a , &b) ;

    switch(sign) {
        case '+' :
            result = a + b ;
            break ;
        case '-' :
            result = a - b ;
            break ;
        case '*' :
            result = a * b ;
            break ;
        case '/' :
            result = a / b ;
            break ;
    }

     printf ("the result of %.1f %c %.1f is : %.1f" , a , sign , b , result) ;

}
