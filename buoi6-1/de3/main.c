#include <stdio.h>

int main() {

    // 1
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    
    float a[n];
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%f", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        printf("%.2f ", a[i]);
    }
    printf("\n");
    
    // 2: 3 phan tu tang dan, la cap so nhan
    
    int cnt=0;
    for (int i = 0; i < n-2; i++){
        float x=a[i];
        float y=a[i+1];
        float z=a[i+2];

        float tmp;
        if(x>y){ tmp=x; x=y; y=tmp; }
        if(x>z){ tmp=x; x=z; z=tmp; }
        if(y>z){ tmp=y; y=z; z=tmp; }

        if(y*y==x*z) cnt++;
    }
    printf("%d\n",cnt);
    

    return 0;
}