#include <stdio.h>

int main(){
    int i, x, n;
    scanf("%d", &n);
    i=1;
    while(i<=n)
    {
        scanf("%d", &x);
        if(x%2==0 && x!=0)
        {
            printf("EVEN ");
        }
        if(x%2!=0)
        {
            printf("ODD ");
        }
        if(x>0)
        {
            printf("POSITIVE\n");
        }
        if(x<0)
        {
            printf("NEGATIVE\n");
        }
        if(x==0)
        {
            printf("NULL\n");
        }
        i++;
    }


    return 0;
}
