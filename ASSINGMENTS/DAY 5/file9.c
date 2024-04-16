
//Write a c program to print alphabet triangle.//

#include <stdio.h>

int main() {
    int n, i, j, k;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++) {
        for(j=i; j<n; j++) {
            printf(" ");
        }
        for(k=0; k<(2*i-1); k++) {
            if(k<i) {
                printf("%c", 'A'+k);
            } else {
                printf("%c", 'A'+(2*i-k-2));
            }
        }
        printf("\n");
    }
    return 0;
}


