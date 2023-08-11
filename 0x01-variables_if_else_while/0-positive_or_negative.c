#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(NULL));  // Initialize random number generator
    
    int n = rand() % 201 - 100;  // Generates a random number between -100 and 100
    
    printf("The number %d is ", n);
    
    if (n > 0) {
        printf("positive");
    } else if (n == 0) {
        printf("zero");
    } else {
        printf("negative");
    }
    
    printf("\n");
    
    return 0;
}
