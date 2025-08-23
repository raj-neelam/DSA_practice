#include <stdio.h>

void main(){
    int len = 5;
    int arr[len];
    for (int i = 0; i < len; i++)
    {
        printf("enter number for [%d] :", i);
        scanf("%d", &arr[i]);
    }

    int min_val = arr[0];
    int min_index = 0;

    printf("\nArray elements are:");
    for (int i = 0; i < len; i++)
    {
        printf("[%d]", arr[i]);
        if (arr[i] > min_val)
        {
            min_val = arr[i];
            min_index = i;
        }
    }
    
    printf("\n");
    printf("Max: %d\n", min_val);
    printf("index: %d\n", min_index);
}