#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high){
    int piv = arr[high];
    int ix = low - 1;
    for (int j=low; j<high; j++){
        if (arr[j]<piv){
            ix++;
            swap(&arr[ix], &arr[j]);
        }
    }
    ix++;
    swap(&arr[piv], &arr[high]);
    return ix;
}

void qs(int arr[], int low, int high){
    
    if (low<high){
        int piv = partition(arr, low, high);
        qs(arr, low, piv-1);
        qs(arr, piv+1, high);
    }
}

void show(int arr[], int len){
    printf("[");
    for (int i=0; i<len; i++){
        if (i==len-1){
            printf(" %d", arr[i]);
            continue;
        }
        printf(" %d,", arr[i]);
    }
    printf("]\n");
}

int binarySearch(int arr[],int len, int val){
    int low = 0;
    int high = len-1;
    while (low<high)
    {
        int current_val = (low + high) / 2;
        if (arr[current_val] == val) {
            return current_val;
        } else if (arr[current_val] < val) {
            low = current_val + 1;
        } else {
            high = current_val - 1;
        }
    }
    return -1;
    
}

void main(){
    int arr[] = {1,3,5,7,9};
    int size = sizeof(arr)/sizeof(int);

    int val;
    printf("Enter element to search: ");
    scanf("%d", &val);

    int idx = binarySearch(arr, size, val);

    if (idx != -1){
        printf("Element found at index %d\n", idx);
    } else {
        printf("Element not found\n");
    }

}