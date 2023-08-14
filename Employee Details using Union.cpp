#include <stdio.h>
#include <string.h>

// Define a union to store employee details
union EmployeeInfo {
    float monthly_salary;
};

// Define a structure to hold general employee information
struct Employee {
    char name[50];
    int id;
    float salary;
    union EmployeeInfo info;
};

int main() {
    int numEmployees;

    printf("Enter the number of employees: ");
    scanf("%d", &numEmployees);

    struct Employee employees[numEmployees];

    for (int i = 0; i < numEmployees; i++) 
	{
        printf("Enter details for Employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Salary: ");
        scanf("%d", &employees[i].id);
        printf("ID: ");
        scanf("%d", &employees[i].salary);
        

    printf("\nEmployee Details:\n");
    for (int i = 0; i < numEmployees; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Name: %s\n", employees[i].name);
        printf("ID: %d\n", employees[i].id);
        printf("ID: %d\n", employees[i].salary);

        if (employees[i].info.monthly_salary != 0) {
            printf("Monthly Salary: $%.2f\n", employees[i].info.monthly_salary);
        }

        printf("\n");
    }

    return 0;
   }
}

