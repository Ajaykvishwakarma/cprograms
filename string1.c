#include <stdio.h>

#define SIZE 3

int main() {
  
    char name[3] = "Jay";
    
    printf("%s", name);
    printf("%15.5s", name);
    printf("%-10.5s", name);
    return 0;
}
