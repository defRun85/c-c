#include "stdio.h"

#define LENGTH 5

int sum_factors(int);

int main(int argc, char *argv[]) {

    int n = 60;

    printf("sum of factors of %i: %i", n, sum_factors(n));

    return 0;

}

// returns the sum of all the factors of a number.
int sum_factors(int n) {

    int sum = 0;

    for ( int i = 1; i <= n; i++ ) {
        if ( n % i == 0 ) {
            sum += i;
        }
    }

    return sum;

}