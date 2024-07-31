#include <stdio.h>

int main() {

    int size = 10;
    
    for(int i = 0; i<10; i++) {
        printf("For Loop number: %d : \n", i);
    }


    int i = 1;

    do {

        printf("Do Loop number: %d : \n", i);
        i++;
    } while (i <= 10) ;

    return 0;

}