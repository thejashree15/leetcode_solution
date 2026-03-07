#include <stdlib.h>

int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    // The concatenated array will be twice the size
    *returnSize = 2 * numsSize;

    // Allocate memory for the new array
    int* result = (int*)malloc((*returnSize) * sizeof(int));
    if (result == NULL) {
        return NULL; // handle memory allocation failure
    }

    // Fill the new array: first copy nums, then copy nums again
    for (int i = 0; i < numsSize; i++) {
        result[i] = nums[i];
        result[i + numsSize] = nums[i];
    }

    return result;
}
