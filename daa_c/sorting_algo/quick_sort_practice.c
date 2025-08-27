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

void main(){
    int arr[] = {4,1,8,9,7,3,0,5,6,2};
    show(arr, 10);
    qs(arr, 0, 9);
    show(arr, 10);
}