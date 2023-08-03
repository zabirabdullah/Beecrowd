#include <stdio.h>

int main(){
    int n, x, y, i, j, k, odd, sum;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%d%d", &x, &y);
        for(j=1, k=0, sum=0; j<=y; k++)
        {
            odd = x;
            odd = odd + k;
            if((odd%2)!=0)
            {
                sum = sum + odd;
                j++;
            }
        }
        printf("%d\n", sum);
    }

    return 0;
}

