
#include <stdio.h>

int main() {
    
    int num = 1;
    char *result;
    
    result = (num % 2 == 0) ? "Even" : "Odd";
    
    printf("The number %d id %s.\n", num, result);
    
    return 0;
}