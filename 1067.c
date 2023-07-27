#include <stdio.h>

int main(){
    int i, count, x;
    scanf("%d", &x);
    i = 1;
    count = 0;
    while(i <= x)
    {
        if(i%2 != 0)
        {
            printf("%d\n", i);
            count++;
        }
        i++;
    }

    return 0;
}
