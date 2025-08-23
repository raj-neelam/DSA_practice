#include<stdio.h>

void show_arr(int rows, int cols, int arr[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("[%d]",  arr[i][j]);
        }
        printf("\n");
    }
    
}

int main()
{
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int arr[rows][cols];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("arr[%d][%d]: ",i, j);
            scanf("%d", &arr[i][j]);
        }
        
    }

    show_arr(rows, cols, arr);
    
    return 0;
}
