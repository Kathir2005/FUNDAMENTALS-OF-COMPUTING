#include <stdio.h>
// Define a structure to hold student details
struct Student {
    char name[50];
    int rollNumber;
    float marks[5];
};
// Function to calculate sum and average of marks
int calculateSumAndAverage(struct Student *student) {
    float sum = 0.0;
    for (int i = 0; i < 5; i++) {
        sum += student->marks[i];
    }
    float average = sum / 5.0;  
    printf("Sum of marks: %.2f\n", sum);
    printf("Average of marks: %.2f\n", average);   
    // Determine and print the grade
    char grade;
    if (average >= 90) {
        grade = 'A';
    } else if (average >= 80) {
        grade = 'B';
    } else if (average >= 70) {
        grade = 'C';
    } else if (average >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }
    printf("Grade: %c\n", grade);
}
int main() {
    struct Student student;    
    printf("Enter student name: ");
    scanf("%s", student.name);    
    printf("Enter roll number: ");
    scanf("%d", &student.rollNumber);  
    printf("Enter marks for 5 subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &student.marks[i]);
    }    
    printf("\nStudent Details:\n");
    printf("Name: %s\n", student.name);
    calculateSumAndAverage(&student);    
    return 0;
}

