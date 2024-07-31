#include <stdio.h>

int main() {
    int array[10];
    int value, found = 0;

    // Input the array of ten integers
    printf("Enter 10 integer values:\n");
    for (int i = 0; i < 10; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Input the value to search
    printf("Enter the value to search: ");
    scanf("%d", &value);

    // Search for the value in the array
    for (int i = 0; i < 10; i++) {
        if (array[i] == value) {
            found = 1; // Mark as found
            printf("The square of %d is %d.\n", value, value * value);
            break; // Exit the loop once the value is found
        }
    }

    // If the value was not found
    if (!found) {
        printf("The value is missing.\n");
    }

    return 0;
}
