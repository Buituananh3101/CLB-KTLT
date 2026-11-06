#include <stdio.h>

int main() {

    // 1.1
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    
    int a[n];
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    
    // 1.2
    int daIn=0;
    int cnt=0;
    for (int i = 0; i < n-1; i++){
        if( (a[i]*a[i+1]) % (a[i]+a[i+1]) == 0 ){
            cnt++;
            if(daIn==0){
                printf("(%d,%d)",a[i],a[i+1]);
                daIn=1;
            }
        }
    }

    return 0;
}