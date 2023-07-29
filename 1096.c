#include <stdio.h>

int main(){
    int i, j, flag;
    for(i=1, j=7; i<=9; i+=2)
    {
        for(flag=1; flag<=3; flag++, j--)
        {
            printf("I=%d J=%d\n", i, j);
        }
        j=7;
        flag=1;
    }

    return 0;
}
