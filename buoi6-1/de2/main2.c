#include <stdio.h>
#include <math.h>

int main() {
    
    // 1
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    
    int x[n], y[n];
    for (int i = 0; i < n; i++) {
        printf("Toa do: %d = ", i);
        scanf("%d%d", &x[i], &y[i]);
    }
    
    for (int i = 0; i < n; i++){
        printf("(%d,%d), ",x[i],y[i]);
    }

    // 2
    long long res=0;
    // for (int i = 0; i < n; i++) res+=abs(x[i]);
    for (int i = 0; i < n; i++) res+= x[i]>0 ? x[i] : -x[i];
    printf("%lld\n",res);

    return 0;
}