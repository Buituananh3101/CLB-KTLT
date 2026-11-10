#include <stdio.h>

int main() {
    int a=1; 
    printf("gia tri: %d\n",a);
    printf("dia chi: %d\n",&a);

    printf("----\n");

    int* p; // p lưu địa chỉ của biến a

    p=&a;
    printf("gia tri: %d\n",p);
    printf("a qua p: %d\n",*p);
    printf("dia chi: %d\n",&p);

    *p=2;
    printf("gia tri: %d\n",a);

    printf("----\n");

    int* m = p;

    printf("gia tri: %d\n",m);
    printf("a qua m: %d\n",*m);
    printf("dia chi: %d\n",&m);

    *m=1000;
    printf("gia tri: %d\n",a);

    printf("----\n");

    int b[3];
    b[0]=10; b[1]=20; b[2]=30;

    printf("dia chi: %d\n",b);
    printf("gia tri: %d\n",b[0]);
    printf("gia tri: %d\n",*b);
    printf("gia tri: %d\n",b[1]);
    printf("gia tri: %d\n",*(b+1));
    
    printf("----\n");
    printf("dia chi: %d\n",&b[0]);
    printf("dia chi: %d\n",&b[1]);
    printf("dia chi: %d\n",&b[2]);

    printf("dia chi: %d\n",b);
    printf("dia chi: %d\n",b+1);
    printf("dia chi: %d\n",b+2);

    printf("----\n");
    long long c[3];
    printf("dia chi: %d\n",&c[0]);
    printf("dia chi: %d\n",&c[1]);
    printf("dia chi: %d\n",&c[2]);

    printf("dia chi: %d\n",c);
    printf("dia chi: %d\n",c+1);
    printf("dia chi: %d\n",c+2);
    return 0;
}