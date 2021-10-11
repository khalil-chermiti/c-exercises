#include <stdio.h>


// find out the sum of array elements

int main (){

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

    // print the sum of array elements
    int result = 0 ;
    result = sumArr(arr , w) ;
    printf("\nthe sum of the array elements is : %i \n\n" ,result) ;
}

// sum function

int sumArr(int *pArr , int size) {

    int i , sum = 0 ;

    for (i = 0 ; i < size ; i++){
        sum += pArr[i];
    }

    return sum ;
}
