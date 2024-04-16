//Print series 1, 2, 4, 8, 16, 32, 64. given n = 64
#include <stdio.h>

int main() {
    int n = 64;
    int i;

    for(i = 1; i <= n; i = i * 2) {
        printf("%d ", i);
    }

    return 0;
}
