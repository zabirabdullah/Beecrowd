#include <stdio.h>

int main(){
    int n, a, b, x, i;
    scanf("%d", &n);
    a=0, b=1, n-=2;

    printf("%d %d", a, b);
    for(i=1; i<=n; i++)
    {
        x = a+b;
        printf(" %d", x);
        a=b;
        b=x;
    }
    printf("\n");

    return 0;
}
