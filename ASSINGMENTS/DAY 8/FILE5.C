//alternativel merge two strings ?

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mergeStrings(const char *s1, const char *s2, char *result) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    int i, j, k = 0;

    // Merge alternately
    for (i = 0, j = 0; i < len1 && j < len2; i++, j++) {
        result[k++] = s1[i];
        result[k++] = s2[j];
    }

    // Copy remaining characters from s1 (if any)
    while (i < len1) {
        result[k++] = s1[i++];
    }

    // Copy remaining characters from s2 (if any)
    while (j < len2) {
        result[k++] = s2[j++];
    }

    // Null-terminate the result string
    result[k] = '\0';
}

int main() {
    const char *str1 = "Bhima";
    const char *str2 = "ABCDEOLM";
    char *output = (char *)malloc(strlen(str1) + strlen(str2) + 1);

    if (output) {
        mergeStrings(str1, str2, output);
        printf("Merged string: %s\n", output);
        free(output);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
