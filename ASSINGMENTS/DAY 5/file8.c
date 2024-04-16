//Write the logic to for incrementing Squared Number-Star Pattern?.
#include <stdio.h>

int main() {
    int n, i, j, count = 1;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++) {
        for(j=1; j<=n; j++) {
            printf("%d", count);
            if(j != n) {
                printf("*");
            }
            count++;
        }
        printf("\n");
    }

    return 0;
}