#include <stdio.h>

int main(){
    int n, i, flag, h;
    i = 1;
    h = 0;
    flag = 0;
    while(i<=100)
    {
        scanf("%d", &n);
        if(n>h)
        {
            h = n;
            flag = i;
        }
        i++;
    }
    printf("%d\n", h);
    printf("%d\n", flag);

    return 0;
}
