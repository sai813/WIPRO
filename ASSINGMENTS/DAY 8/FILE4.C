//C Program to Remove all Characters in Second String which are present in First String
//i/p :Bhima shankar is a C programmeC o/p :Bhima snkr is a C programme
#include <stdio.h>
#include <string.h>

void removeChars(char *first, char *second) {
    int len1 = strlen(first);
    int len2 = strlen(second);
    int i, j, k;

    for (i = 0; i < len2; i++) {
        for (j = 0; j < len1; j++) {
            if (second[i] == first[j]) {
                for (k = i; k < len2; k++) {
                    second[k] = second[k + 1];
                }
                len2--;
                i--;
                break;
            }
        }
    }
    printf("Output String: %s\n", second);
}

int main() {
    char first[100], second[100];
    
    printf("Enter the first string: ");
    fgets(first, sizeof(first), stdin);
    printf("Enter the second string: ");
    fgets(second, sizeof(second), stdin);

    // Removing '\n' from fgets
    first[strcspn(first, "\n")] = 0;
    second[strcspn(second, "\n")] = 0;

    removeChars(first, second);

    return 0;
}
