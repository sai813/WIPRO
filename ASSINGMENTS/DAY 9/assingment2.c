#include <stdio.h>

#define MAX_EMPLOYEES 100

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    FILE *file;
    struct Employee employees[MAX_EMPLOYEES];
    int count = 0;

    // Open the file for reading
    file = fopen("employees.txt", "r");
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    // Read data from the file into struct variables
    while (fscanf(file, "%d %s %f", &employees[count].id, employees[count].name, &employees[count].salary) == 3) {
        count++;
        if (count >= MAX_EMPLOYEES) {
            printf("Maximum number of employees reached.\n");
            break;
        }
    }

    // Close the file
    fclose(file);

    // Display the data
    printf("Employee Records:\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d, Name: %s, Salary: %.2f\n", employees[i].id, employees[i].name, employees[i].salary);
    }

    return 0;
}
