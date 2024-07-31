#include <stdio.h>

int main() {
    float principal, time, rate, simple_interest;

    // Input Principal, Time, and Rate
    printf("Enter the Principal amount: ");
    scanf("%f", &principal);

    printf("Enter the Time period in years: ");
    scanf("%f", &time);

    printf("Enter the Rate of interest: ");
    scanf("%f", &rate);

    // Calculate Simple Interest
    simple_interest = (principal * time * rate) / 100;

    // Output the Simple Interest
    printf("Simple Interest is: %.2f\n", simple_interest);

    return 0;
}
