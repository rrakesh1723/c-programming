#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[] = {5, 3, 8, 6, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 6;
    int found = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            printf("Element %d found at index %d\n", target, i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element %d not found in the array\n", target);
    }

    return 0;
}


