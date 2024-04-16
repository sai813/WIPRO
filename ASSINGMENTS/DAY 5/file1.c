//. Print series 0,3,8,15,24,35,48,63,80,99 given n = 10?
#include <stdio.h>

int main() {
    int n = 10;
    int i;

    for(i = 0; i < n; i++) {
        printf("%d ", i*i - 1);
    }

    return 0;
}
