#include <stdio.h>

int main() {
    // 2.1
    int m, n;
    printf("Nhap so hang m: ");
    scanf("%d", &m);
    printf("Nhap so cot n: ");
    scanf("%d", &n);
    
    int a[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    
    // 2.2
     for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if((i+1)%2==0){
                // tính
            }
        }
        printf("\n");
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if(i+j==n-1){
                // tính
            }
        }
        printf("\n");
    }
    
    return 0;
}