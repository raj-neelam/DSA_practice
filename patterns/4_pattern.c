// target pattern for n=4
// 1 2 3 4
//   2 3 4
//     3 4
//       4

#include <stdio.h>

int main() {
    int n;
    printf("enter the value of n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j >= i)
            {
                printf("%d ", j + 1);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    
    return 0;
}