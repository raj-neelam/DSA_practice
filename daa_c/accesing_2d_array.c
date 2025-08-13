#include <stdio.h>

int main() {
    int arr[2][3];
    int (*p)[3] = arr;
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("arr[%d][%d] = : ", i, j);
            scanf("%d", (*(p+i)+j));
        }
    }

    printf("-------------\n"); 
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("[%d] ", *(*(p+i)+j));
        }
        printf("\n");
    }

    return 0;
}