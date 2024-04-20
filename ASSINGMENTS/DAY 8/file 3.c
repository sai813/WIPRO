// Write a program to find the  n-th number made of prime digits Input Format:First Line Of Input Contains T Number Of Test Cases 
//Second Line Of Input Contains an input Number N.Output Format:Print the Nth number of sequence and it should be only prime
#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1)
        return false;
    if (num <= 3)
        return true;
    if (num % 2 == 0 || num % 3 == 0)
        return false;
    for (int i = 5; i * i <= num; i = i + 6) {
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    }
    return true;
}

// Function to find the nth number made of prime digits
int findNthPrime(int n) {
    int count = 0, num = 2;
    while (count < n) {
        if (isPrime(num)) {
            count++;
        }
        num++;
    }
    return num - 1;
}

int main() {
    int T, N;
    scanf("%d", &T); // Number of test cases
    while (T--) {
        scanf("%d", &N); // Input number N
        int result = findNthPrime(N);
        printf("%d\n", result); // Print the Nth prime number
    }
    return 0;
}
