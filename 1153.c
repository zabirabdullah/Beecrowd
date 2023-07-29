#include <stdio.h>

int main(){
    int n, x, y, i;
    scanf("%d", &n);
    y=1;
    for(i=0; i<n; i++)
    {
        x = (n-i);
        y *= x;
    }
    printf("%d\n", y);

    return 0;
}
