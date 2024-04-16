/*
1. Assignment
scan and print Employee details 

o/p
========================================
            Employee Details
========================================

SLNo    ID  Name    Gender    Sal Phno    Address
----    --- ------- ------    ---   ------  -------
1       101 Bhima   M         10000.5 99999 Kar
*/

#include<stdio.h>
#include <string.h>
#define MAX_EMPLOYEES 100

int main() {
    int numEmployees;
    int ids[MAX_EMPLOYEES];
    char names[MAX_EMPLOYEES][50];
    char genders[MAX_EMPLOYEES];
    float salaries[MAX_EMPLOYEES];
    char phones[MAX_EMPLOYEES][20];
    char addresses[MAX_EMPLOYEES][100];

    // Input
    printf("Enter the number of employees: ");
    if (scanf("%d", &numEmployees) != 1 || numEmployees <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    // Clear input buffer
    while (getchar() != '\n');

    printf("Enter employee details:\n");
    for (int i = 0; i < numEmployees; i++) {
        printf("Employee %d:\n", i + 1);
        printf("ID: ");
        if (scanf("%d", &ids[i]) != 1) {
            printf("Invalid input for ID.\n");
            return 1;
        }

        // Clear input buffer
        while (getchar() != '\n');

        printf("Name: ");
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strcspn(names[i], "\n")] = '\0'; // Remove newline character

        printf("Gender: ");
        scanf(" %c", &genders[i]);

         while (getchar() != '\n');
        printf("Salary: ");
        if (scanf("%f", &salaries[i]) != 1) {
            printf("Invalid input for salary.\n");
            return 1;
        }

        // Clear input buffer
        while (getchar() != '\n');

        printf("Phone: ");
        fgets(phones[i], sizeof(phones[i]), stdin);
        phones[i][strcspn(phones[i], "\n")] = '\0'; // Remove newline character

        printf("Address: ");
        fgets(addresses[i], sizeof(addresses[i]), stdin);
        addresses[i][strcspn(addresses[i], "\n")] = '\0'; // Remove newline character
    }

    // Output
    printf("\n========================================\n");
    printf("            Employee Details            \n");
    printf("========================================\n\n");
    printf("SLNo\tID\tName\tGender\tSalary\t\tphno\t\taddress\n");
    printf("----\t---\t-------\t------\t-----\t\t-----\t\t-----\n");
    for (int i = 0; i < numEmployees; i++) {
        printf("%d\t%d\t%s\t%c\t%.2f\t%s\t%s\n",
               i + 1, ids[i], names[i], genders[i],
               salaries[i], phones[i], addresses[i]);
    }

    return 0;
}