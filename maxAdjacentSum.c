#include <stdio.h>

// print the max adjacent sum of two arrays elements
void main () {
    /***** creating an array with w size *****/

    int w ; // width
    printf("\nPlease nenter the length of the array : ") ;
    scanf("%i" , &w ) ;
    printf("\n") ;

    int arr[w] ;

    // filling the array
    for(int i = 0 ; i < w ; i++ ) {
        printf("Enter element number %i : " , i) ;
        scanf("%i" , &arr[i]);
    }

    printf("\n\n**************** array's elements ****************\n\n") ;

    // printing array content
    for(int i = 0 ; i < w ; i++ ) {
        printf("ar2[%i] : %i \n" , i , arr[i] ) ;
    }

    // max adjacent sum

    int maxAdjSum = arr[0] ;
    for (int i = 1 ; i < w ; i++) {
        if (arr[i] + arr[i-1] > maxAdjSum) maxAdjSum = arr[i] + arr[i-1] ;
    }

    printf("\nmax adjacent sum is : %i \n" , maxAdjSum) ;
}

