#include <stdio.h>
#include <string.h>

// Define a union for different employee details
union EmployeeDetails {
    char name[50];
    int age;
    float salary;
};

int main() {
    int numEmployees;

    printf("Enter the number of employees: ");
    scanf("%d", &numEmployees);

    // Declare an array of unions to store employee details
    union EmployeeDetails employees[numEmployees];

    for (int i = 0; i < numEmployees; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);
        
        int choice;
        printf("1. Name\n2. Age\n3. Salary\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter name: ");
                scanf("%s", employees[i].name);
                break;
            case 2:
                printf("Enter age: ");
                scanf("%d", &employees[i].age);
                break;
            case 3:
                printf("Enter salary: ");
                scanf("%f", &employees[i].salary);
                break;
            default:
                printf("Invalid choice\n");
                i--; // Decrement to retry input for this employee
        }
    }

    printf("\nEmployee Details:\n");
    for (int i = 0; i < numEmployees; i++) {
        printf("Employee %d:\n", i + 1);

        if (strlen(employees[i].name) > 0) {
            printf("Name: %s\n", employees[i].name);
        }
        if (employees[i].age > 0) {
            printf("Age: %d\n", employees[i].age);
        }
        if (employees[i].salary > 0) {
            printf("Salary: %.2f\n", employees[i].salary);
        }

        printf("\n");
    }

    return 0;
}

