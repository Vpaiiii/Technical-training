#include <stdio.h>

int searchInsert(int* nums, int size, int target) {
    for (int i = 0; i < size; i++) {
        if (nums[i] >= target) return i;
    }
    return size;
}

int main() {
    int nums[] = {1, 3, 5, 6};
    int target;
    scanf("%d", &target);
    int pos = searchInsert(nums, 4, target);
    printf("Insert position: %d\n", pos);
    return 0;
}