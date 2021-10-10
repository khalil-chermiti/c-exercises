#include <stdio.h>

int main (){

    int l , flag = 1;
    printf("Enter array's length : ") ;
    scanf("%i" , &l ) ;
    int arr[l] ;

    int i = 0 ;

    // fill array
    printf("\n********* fill array **********\n\n") ;
    while ( i < l ) {
        printf("Enter element number %i : " , i) ;
        scanf("%i" , &arr[i]) ;
        i++ ;
    }

    // print array
    printf("\n********* print array **********\n\n") ;
    i = 0 ;
    while (i < l) {
        printf("arr[%i] : %i \n" , i , arr[i]) ;
        i++ ;
    }

    // check if palindrome
    printf("\n********* check if Palindrome **********\n\n") ;
    for (int j = 0 ; j < l/2 ; j++ ) {
        if (arr[j] != arr[l-1-j]) flag = 0;
        printf("arr[%i] : %i <===> arr[%i] %i \n" , j , arr[j] , l-1-j , arr[l-1-j] ) ;
    }

    if (flag == 1) printf("\n===> array is a Palindrome\n\n") ;
    else if (flag == 0) printf("===> array is not a Palindrome\n\n") ;
}
