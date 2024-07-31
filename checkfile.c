#include <stdio.h>
#include <string.h>

int main () {
    char fileNames[][20] = {"file1.txt", "file2.txt" };
    
    char searchName[20];
    int found = 0;
    
    
    printf("Enter file name to search: ");
    scanf("%s", searchName);
    
    
    for(int i = 0; i< 3; i++) {
        if(strcmp(fileNames[i], searchName) == 0) {
            found = 1;
            break;
        }
    }
    
    if(found) {
        printf("File Exist %s\n", searchName);
    } else {
        printf("File Not Exist %s\n", searchName);
    }
    
    return 0;
    
}