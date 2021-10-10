#include <stdio.h>

// reading input using do while
int main () {
   float grade ;
   do {
    printf("enter your grade : ") ;
    scanf("%f" , &grade);
   } while (grade < 0 && grade > 20) ;

   printf("your grade is : %.2f" , (float)grade) ;
}
