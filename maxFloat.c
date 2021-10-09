#include <stdio.h>

int main ()
{
    // print the maximum float between two floating numbers
    float a,b;
    printf("enter two floating numbers : ") ;
    scanf("%f %f" , &a , &b) ;

    if (a > b) printf("%f is bigger" , a) ;
    else printf("%.1f is bigger" , b);

}
