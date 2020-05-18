#include "stdio.h"

// find factors of this number.
#define N 24

bool is_factor(int, int);

// returns true if a factor is found, false if not.
bool is_factor(int n, int div) {

    int f = 0;

    if ( n % div == 0 ) {
        return true;
    } else {
        return false;
    }

}

int main(int argc, char *argv[]) {
    
    int nf = 0;

    printf("---------------------------------------------\n");
    printf("#         find factors of a number          #\n");
    printf("---------------------------------------------\n");

    printf("\t\t\t\tfactors of %i \n", N);
    printf("\n");

    for ( int i = 1; i <= N; i++ ) {
        if ( is_factor(N, i) ) {

            int sum = 0;

            printf(" - %i is a factor of %i \n", i, N);

            sum = N / i;

            printf("\t %i / %i = %i \n", N, i, sum);

            nf++;

        }
    }

    printf("\n");

    if ( nf == 2 ) {
        // if 2 it's a prime number.    
        printf("---------------------------------------------\n");
        printf("    %i has 2 factors, it's a prime number!   \n", N);
        printf("---------------------------------------------");

    } else {
        // else it isn't prime.
        printf("---------------------------------------------\n");
        printf("       %i has a total of %i factors          \n", N, nf);
        printf("---------------------------------------------");

    }

    return 0;

}