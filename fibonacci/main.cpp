#include "stdio.h"

void fibonacci(int);

void fibonacci(int n) {

    int len = n;

    printf("printing the first %i fibonacci numbers...\n", len);

    int n1 = 0, n2 = 1, next = 0;

    for ( int i = 0; i < len; i++ ) {
        
        if ( i == 1 ) {
            printf("%i\n", n1);
        }

        // if ( i == 2 ) {
        //     printf("%i\n", n2);
        // }

        next = n1 + n2;
        n1 = n2;
        n2 = next;

        printf("%i\n", next);

    }

}


int main(int argc, char *argv[]) {

    // the number of fibonacci numbers to print.
    int num = 30;

    fibonacci(num);

    return 0;

}