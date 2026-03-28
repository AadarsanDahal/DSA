// 6.	Quick Sort
#include <stdio.h>
#include <conio.h>

int partition(int arr[], int low, int high) {
    int pivot = arr[high], i = (low - 1);
    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            int t = arr[i]; arr[i] = arr[j]; arr[j] = t;
        }
    }
    int t = arr[i + 1]; arr[i + 1] = arr[high]; arr[high] = t;
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = 6;
    printf("Before: "); for(int i=0; i<n; i++) printf("%d ", arr[i]);
    quickSort(arr, 0, n - 1);
    printf("\nAfter:  "); for(int i=0; i<n; i++) printf("%d ", arr[i]);
    printf("\n\nProgram Made BY : Aadarsan Dahal\n");
    getch();
    return 0;
}

