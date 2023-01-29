#include <stdio.h>
void deleteElement(int *arr, int *n, int index) {
    int i;
    for (i = index; i < (*n - 1); i++) {
        *(arr + i) = *(arr + i + 1);
    }
    (*n)--;
}

int main() {
    int arr[] = {1, 2, 3, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int index = 1;
    int i;

    printf("Original array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    deleteElement(arr, &n, index);

    printf("Array after deletion: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}

