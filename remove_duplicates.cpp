#include <stdio.h>
#include <stdlib.h>

// Check if value is already in the array
int isPresent(int arr[], int size, int val) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == val) {
            return 1;
        }
    }
    return 0;
}

// Remove duplicates and return unique array
int* removeDuplicates(int arr[], int n, int *newSize) {
    int *unique = (int*)malloc(n * sizeof(int));
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (!isPresent(unique, count, arr[i])) {
            unique[count] = arr[i];
            count++;
        }
    }

    unique = (int*)realloc(unique, count * sizeof(int)); // shrink to actual size
    *newSize = count;
    return unique;
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int newSize;
    int *uniqueArr = removeDuplicates(arr, n, &newSize);

    printf("Array after removing duplicates:\n");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", uniqueArr[i]);
    }

    free(uniqueArr);
    return 0;
}