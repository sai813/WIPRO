//.Program to find nth number made of given four digits 1, 4,6 and 9 as the only digits..
#include <stdio.h>
#include <math.h>

// Function to find the nth number made of digits 1, 4, 6, and 9
int findNthNumber(int n) {
    int result = 0;
    int base = 1;
    while (n > 0) {
        result += (n % 4) * base;
        n /= 4;
        base *= 10;
    }
    return result;
}

// Function to count the number of digits in a number
int countDigits(int number) {
    int count = 0;
    while (number != 0) {
        number /= 10;
        count++;
    }
    return count;
}

int main() {
    int T;
    printf("Enter the number of test cases: ");
    scanf("%d", &T);

    while (T--) {
        int N;
        printf("Enter N: ");
        scanf("%d", &N);

        int nthNumber = findNthNumber(N);
        int numDigits = countDigits(nthNumber);
        printf("Output: %d\n", numDigits);
    }

    return 0;
}

