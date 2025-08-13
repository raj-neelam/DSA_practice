// Online C compiler to run C program online
#include <stdio.h>

void show_arr(int arr[], int arr_len){
    printf("array is : ");
    for (int i=0; i < arr_len; i++){
        printf("%d | ", arr[i]);
    }
    printf("\n\n");
}

void insertAt(int arr[], int arr_len, int index, int element) {
    if (index < 0 || index >= arr_len) {
        printf("Invalid index!\n");
        return;
    }

    // Shift elements to the right from the end down to index
    for (int i = arr_len - 1; i > index; i--) {
        arr[i] = arr[i - 1];
    }

    arr[index] = element;
}

int main() {
    int elements_to_insert;
    printf("elements to enter: ");
    scanf("%d", &elements_to_insert);
    
    int arr_len = elements_to_insert + 3;
    int arr[arr_len];
    
    // Fill the array
    for (int i = 0; i < arr_len; i++) {
        if (i >= elements_to_insert) {
            arr[i] = 0;
            continue;
        }
        printf("%d : ", i);
        scanf("%d", &arr[i]);
    }
    
    show_arr(arr, arr_len);
    
    int val;
    printf("enter the element to put at last: ");
    scanf("%d", &val);
    insertAt(arr, arr_len, elements_to_insert, val);
    printf("array after insertion:\n");
    show_arr(arr, arr_len);
    
    printf("enter the element to put at first: ");
    scanf("%d", &val);
    insertAt(arr, arr_len, 0, val);
    printf("array after insertion:\n");
    show_arr(arr, arr_len);
    
    int index;
    printf("enter the index to put element: ");
    scanf("%d", &index);
    printf("enter the element to put on index %d: ", index);
    scanf("%d", &val);
    insertAt(arr, arr_len, index, val);
    printf("array after insertion:\n");
    show_arr(arr, arr_len);
    
    return 0;
}