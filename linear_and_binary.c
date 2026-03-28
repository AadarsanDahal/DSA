// a.	Linear and Binary Search
	#include <stdio.h>
#include <conio.h>

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) return i;
    }
    return -1;
}

int binarySearch(int arr[], int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) return mid;
        if (arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int main() {
    int sData[] = {11, 22, 33, 44, 55};
    int n = 5, key = 44;
    printf("Binary Search: Key %d found at index %d\n", key, binarySearch(sData, 0, n-1, key));
 
    getch();
    return 0;
}

