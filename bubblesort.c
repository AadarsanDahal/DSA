
// 1.	Bubble Sort
#include <stdio.h>
#include <conio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22};
    int n = 5;
    printf("Before: "); for(int i=0; i<n; i++) printf("%d ", arr[i]);
    bubbleSort(arr, n);
    printf("\nAfter:  "); for(int i=0; i<n; i++) printf("%d ", arr[i]);
    printf("\n\nProgram Made BY : Aadarsan Dahal\n");
    getch();
    return 0;
}
