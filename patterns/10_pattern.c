#include <stdio.h>

int mini(int a, int b){
    if (a<b){
        return a;
    }
    return b;
}

int main() {
    // Write C code here
    int n;
    printf("Enter the value of n :");
    scanf("%d", &n);
    int to_run = ((n-1)*2)+1;
    for (int i=0; i<to_run; i++){
        for (int j=0; j<to_run; j++){
            int dist = mini( mini(i, j) , mini(to_run-i-1, to_run-j-1));
            printf("%d  ",n-dist);
        }
        printf("\n");
    }
    return 0;
}