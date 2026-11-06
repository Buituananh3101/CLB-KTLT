#include <stdio.h>

int main() {
    printf("\n");
    // 1
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
    // 2
    long long res=1;
    for (int i = 0; i < n; i++)  if(a[i]%5==3||a[i]<100){
        res*=a[i];
    }
    printf("%lld ", res);


    printf("\n");
    // 3
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int tmp =a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}