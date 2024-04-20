 //Check whether a given number can be expressed as the sum of two prime number
//i/p Enter a positive integer: 34 Output 34 = 3 + 31 34 = 5 + 29 34 = 11 + 23 34 = 17 + 17 NoofWays = 4 NoofWays=-1//
#include <stdio.h>

int isPrime(int n) {
    if (n <= 1) return 0; // 0 and 1 are not prime
    if (n <= 3) return 1; // 2 and 3 are prime
    if (n % 2 == 0 || n % 3 == 0) return 0; // multiples of 2 and 3 are not prime

    // Check all numbers of the form 6k ± 1 up to sqrt(n)
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return 0;
    }
    return 1;
}

void findPrimePairs(int num) {
    int count = 0;
    printf("Output\n");
    for (int i = 2; i <= num / 2; ++i) {
        if (isPrime(i) && isPrime(num - i)) {
            printf("%d = %d + %d\n", num, i, num - i);
            count++;
        }
    }
    if (count > 0)
        printf("NoofWays = %d\n", count);
    else
        printf("NoofWays = -1\n");
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    findPrimePairs(num);
    return 0;
}
