#include <stdio.h>

void main(){
    int len = 5;
    int arr[len];
    for (int i = 0; i < len; i++)
    {
        printf("enter number for [%d] :", i);
        scanf("%d", &arr[i]);
    }

    printf("\nArray elements in reverse are:");
    for (int i = len-1; i >= 0; i--)
    {
        printf("[%d]", arr[i]);
    }    
}