//statement: Write the logic to print right triangle star pattern.//
#include <stdio.h>

int main() {
    int N;
    printf("Enter the value of N (2 <= N <= 10): ");
    scanf("%d", &N);

    if (N >= 2 && N <= 10) {
        int num = 1;  // Initialize the starting number
        for (int row = 0; row < N; row++) {
            for (int col = 0; col < N; col++) {
                printf("%d", num);
                if (col < N - 1) {
                    printf("*");
                }
                num++;
            }
            printf("\n");  // Move to the next row
        }
    } else {
        printf("Invalid input. Please enter a value between 2 and 10.\n");
    }

    return 0;
}
