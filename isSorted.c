#include <stdio.h>

void main (){

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
        printf("arr[%i] : %i \n" , i , arr[i] ) ;
    }

    // find out if array is sorted
    int flag = 1 ;
    for (int i = 1 ; i < w ; i++ ) {
        if (arr[i] < arr[i-1]) flag = 0 ;
    }

    if (flag == 1 ) printf("\narray is sorted !!!!\n") ;
    else if (flag == 0) printf("\narray is not sorted\n") ;


}
