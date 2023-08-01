#include <stdio.h>

int main(){
    int x, i, j, sum, even;

    while(1)
    {
        scanf("%d", &x);
        if(x==0)
        {
            break;
        }
        else
        {
            i = 0;
            j = 0;
            sum = 0;
            even = 0;
            while(i<5)
            {
                even = x + j;
                if(even%2==0)
                {
                    sum = sum + even;
                    i++;
                }
                j++;
            }
        }
        printf("%d\n", sum);

    }

    return 0;
}
