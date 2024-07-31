#include <stdio.h>

// Define a structure to hold student details
struct Student {
    char name[50];
    int rollnumber;
    char address[100];
    char course[10];
};

int main() {
    // Declare an array to hold details of 10 students
    struct Student students[2];

    // Loop to input details of each student
    for (int i = 0; i < 2; i++) {
        printf("Enter details for student %d:\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", students[i].name);  // %[^\n] format specifier to read input with spaces

        printf("Roll Number: ");
        scanf("%d", &students[i].rollnumber);

        printf("Address: ");
        scanf(" %[^\n]", students[i].address);

        printf("Course (BCA/MCA): ");
        scanf(" %[^\n]", students[i].course);

        printf("\n"); // For better readability
    }

    // Display the details of all students
    printf("Details of all students:\n");
    for (int i = 0; i < 2; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollnumber);
        printf("Address: %s\n", students[i].address);
        printf("Course: %s\n", students[i].course);
        printf("\n"); // For better readability
    }

    return 0;
}
