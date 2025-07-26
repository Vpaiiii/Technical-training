#include <stdio.h>
#include <stdlib.h>

int isPresent(int *arr, int size, int val) {
    for(int i = 0; i < size; i++) {
        if(*(arr + i) == val) {
            return 1;
        }
    }
    return 0;
}

int* removeDuplicates(int *arr, int n, int *newSize) {
    int *uniqueArr = (int*) malloc(n * sizeof(int));
    int count = 0;

    for(int i = 0; i < n; i++) {
        if(!isPresent(uniqueArr, count, *(arr + i))) {
            *(uniqueArr + count) = *(arr + i);
            count++;
        }
    }

    uniqueArr = (int*) realloc(uniqueArr, count * sizeof(int));
    *newSize = count;
    return uniqueArr;
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int *arr = (int*) malloc(n * sizeof(int));
    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", (arr + i));
    }

    int uniqueSize;
    int *uniqueArr = removeDuplicates(arr, n, &uniqueSize);

    printf("Array after removing duplicates:\n");
    for(int i = 0; i < uniqueSize; i++) {
        printf("%d ", *(uniqueArr + i));
    }

    free(arr);
    free(uniqueArr);
    return 0;
}