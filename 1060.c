#include <stdio.h>

int main(){
    double a,b,c,d,e,f;
    scanf("%lf%lf%lf%lf%lf%lf", &a, &b, &c, &d, &e, &f);
    int n=0;
    if(a>0)
    {
        n++;
    }
    if(b>0)
    {
        n++;
    }
    if(c>0)
    {
        n++;
    }
    if(d>0)
    {
        n++;
    }
    if(e>0)
    {
        n++;
    }
    if(f>0)
    {
        n++;
    }
    printf("%d valores positivos\n", n);

    return 0;
}
