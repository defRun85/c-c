#include "stdio.h"

#define N 30

int main(int argc, char *argv[]) {

    int a[N] = {0};

    for ( int i = 2; i < N; i++ ) {
        for ( int j = i * i; j < N - 1; j+=i ) {
            a[j - 1] = 1;
        }
    }

    for ( int i = 1; i < N; i++ ) {
        if ( a[i - 1] == 0 ) {
            printf("%i\n", i);
        }
    }    

    return 0;

}