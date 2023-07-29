#include <stdio.h>

int main(){
    int n, x, i, flag;
    scanf("%d", &n);

    for(i=2, flag=0; i<n; i++)
    {
        x = n%i;

        if(x==0)
        {
            printf("Not a Prime Number\n");
            flag = 0;
            break;
        }
        else if(x!=0)
        {
            flag = 1;
        }
    }
    if(n==1)
    {
        printf("Not a Prime Number\n");
    }
    if(n==2)
    {
        printf("Prime Number\n");
    }
    if(flag==1)
    {
        printf("Prime Number\n");
    }

    return 0;
}
