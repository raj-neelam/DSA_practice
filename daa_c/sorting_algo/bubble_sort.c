#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 1; i <= n - 1; i++) {
        int hasSwapped = 0;
        for (int j = 1; j <= n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // swap 
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                hasSwapped = 1;
                
            }   
        }
        if (!hasSwapped) {
            break;
        }
    }
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    bubbleSort(arr, n);

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("[%d] ", arr[i]);
    }
    printf("\n");
    
    return 0;
}