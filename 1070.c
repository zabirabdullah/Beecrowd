#include <stdio.h>

int main(){
    int i, count, n;
    scanf("%d", &n);
    i = 1;
    count = 0;
    if(n%2==0)
    {
        n++;
    }
    while(i<=6)
    {
        printf("%d\n", n);
        n+=2;
        i++;
    }

    return 0;
}

