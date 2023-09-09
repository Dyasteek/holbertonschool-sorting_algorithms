#include "sort.h"
/**
 * quick sort - sorts a rray of integers in ascending order
 *
 * @array: array of integers
 * @size: size of the array
 * Return: Void
 */

//void quick_sort(int *array, size_t size);
//{

//}
int main() {
    int arr[] = {1, 8, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array de enteros:\n");
    
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\n");

    return 0;
}