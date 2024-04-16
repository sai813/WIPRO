//Find out the sum of series   3+33+333+3333+33333+333333 
#include <stdio.h>

int main() {
    int i, term = 0, sum = 0;

    for(i=1; i<=6; i++) {
        term = term * 10 + 3;
        sum += term;
    }

    printf("The sum of the series is: %d\n", sum);

    return 0;
}
