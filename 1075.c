#include <stdio.h>

int main(){
    int n, x;
    scanf("%d", &n);
    x=0;
    while(x<=10000)
    {
        x++;
        if((x%n) == 2)
        {
            printf("%d\n", x);
        }
    }



    return 0;
}
