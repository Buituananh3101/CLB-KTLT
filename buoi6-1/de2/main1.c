#include <stdio.h>

typedef struct {
    int x;
    int y;
    
} ToaDo;

int main() {

    // 1
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    ToaDo a[n];
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d%d", &a[i].x, &a[i].y);
    }
    
    for (int i = 0; i < n; i++) {
        printf("(%d,%d), ", a[i].x, a[i].y);
    }
    printf("\n");
    
    // 2


    return 0;
}