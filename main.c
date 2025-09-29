// main.c
#include "dotproduct.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, result;
    int *firstVector, *secondVector;

    printf("Enter length of vectors: ");
    scanf("%d", &n);

    firstVector = (int *) malloc(n*sizeof(int));
    secondVector = (int *) malloc(n*sizeof(int));

    retreiveData(n, firstVector);
    retreiveData(n, secondVector);

    result = dp(n, firstVector, secondVector);

    printf("%d\n", result);

    free(firstVector);
    free(secondVector);

}