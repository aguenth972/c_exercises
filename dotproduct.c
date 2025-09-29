// Calculate the Dot Product between two vectors
#include <stdio.h>

int main() {
    int dotProduct = 0;
    int firstVector[3], secondVector[3];
    
    printf("Enter 3 Components of 1st Vector: ");
    scanf("%d %d %d", &firstVector[0], &firstVector[1], &firstVector[2]);

    printf("Enter 3 Components of 2nd Vector: ");
    scanf("%d %d %d", &secondVector[0], &secondVector[1], &secondVector[2]);

    for (int i = 0; i<3; i++) {
        dotProduct += firstVector[i] * secondVector[i];
    }

    printf("%d\n", dotProduct);

}