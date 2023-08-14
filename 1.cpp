#include <stdio.h>
struct Employee_details {
    char name[50];
    int idno;
    float salary;
};

int main() {
    struct Employee_details Emp1;
    printf("Enter Name, idno, salary\n");
    scanf("%s %d %f", Emp1.name, &Emp1.idno, &Emp1.salary);
    printf("Details of the company Employees\n");
    printf("Name = %s idno = %d Salary = %.2f ", Emp1.name, Emp1.idno, Emp1.salary);
    return 0;
}
