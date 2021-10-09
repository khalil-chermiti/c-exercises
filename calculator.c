#include <stdio.h>

// this is a small calculator built using the switch case ;

// this will print the result of the calculation

int calc( float x ,char op, float y , float res) {
    printf ("\nthe result of %.1f %c %.1f is : %.1f \n" , x , op , y , res) ;
}

int main (){

    char sign ;
    float a , b , result;
    int counter ;

    printf("enter the sign of the operation you want to perform [ * , / , + , - , ^] : ") ;
    scanf("%c" , &sign) ;

    printf("\nenter num1 and num2 : ") ;
    scanf("%f %f" , &a , &b) ;

    switch(sign) {

        case '+' :
            result = a + b ;
            calc(a , sign , b , result) ;
            break ;

        case '-' :
            result = a - b ;
            calc(a , sign , b , result) ;
            break ;

        case '*' :
            result = a * b ;
            calc(a , sign , b , result) ;
            break ;

        case '/' :
            if (b == 0) {
                printf("\nyou can't devide by zero!!!!!\n") ;
            } else {
                result = a / b ;
                calc(a , sign , b , result) ;
            }
            break ;

        case '^' :
            if (b == 0 ) {
                result = 1 ;
                calc(a , sign , b , result) ;
            } else {
                counter = b ;
                result = 1 ;
                while (counter > 0) {
                    result *= a ;
                    counter-- ;
                }
            }
            break ;

        default :
            printf("Error !!!") ;
            break ;
    }

}


