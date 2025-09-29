// Calculate the Dot Product between two vectors
#include <stdio.h>
#include <stdlib.h>

int dp(int n, int *firstVector, int *secondVector) {
    int dotProduct = 0;

    for (int i = 0; i < n; i++) {
        dotProduct += firstVector[i] * secondVector[i];
    }
    return dotProduct;
}

void retreiveData(int n, int *vector) {
    printf("Enter vector numbers: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vector[i]);
    }
}
