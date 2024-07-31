#include <stdio.h>

int stringLength(const char *str) {
  
    const char *ptr = str;
    int length = 0;
    
    while (*ptr != '\0') {
        length++;
        ptr++;
        
    }
    
    return length;
}

int main() {
    char str[100];
    
    printf("Enter the string: ");
    scanf("%[^\n]", str);
    
    int length = stringLength(str);
    
    printf("The length of the string \"%s\" is: %d\n", str, length);
    
    return 0;
}