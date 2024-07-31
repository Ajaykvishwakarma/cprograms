#include <stdio.h>

// Define a structure to hold employee salary details
struct Salary {
    float basic;
    float da;
    float ta;
    float deduction;
};

// Function to calculate gross salary
float calculateGrossSalary(struct Salary s) {
    return s.basic + s.da + s.ta;
}

// Function to calculate net salary
float calculateNetSalary(struct Salary s) {
    return calculateGrossSalary(s) - s.deduction;
}

int main() {
    // Declare a variable of type Salary
    struct Salary empSalary;

    // Input employee salary details
    printf("Enter Basic Salary: ");
    scanf("%f", &empSalary.basic);

    printf("Enter Dearness Allowance (D.A.): ");
    scanf("%f", &empSalary.da);

    printf("Enter Travel Allowance (T.A.): ");
    scanf("%f", &empSalary.ta);

    printf("Enter Deduction: ");
    scanf("%f", &empSalary.deduction);

    // Calculate gross salary
    float grossSalary = calculateGrossSalary(empSalary);

    // Calculate net salary
    float netSalary = calculateNetSalary(empSalary);

    // Display the results
    printf("\nGross Salary: %.2f\n", grossSalary);
    printf("Net Salary: %.2f\n", netSalary);

    return 0;
}
