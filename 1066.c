#include <stdio.h>

int main(){
    int a, b, c, d, e;
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    int even = 0, odd = 0, pos = 0, neg = 0;
    //pos --------------
    if(a>0)
    {
        pos++;
    }
    if(b>0)
    {
        pos++;
    }
    if(c>0)
    {
        pos++;
    }
    if(d>0)
    {
        pos++;
    }
    if(e>0)
    {
        pos++;
    }
    //neg --------------
    if(a<0)
    {
        neg++;
    }
    if(b<0)
    {
        neg++;
    }
    if(c<0)
    {
        neg++;
    }
    if(d<0)
    {
        neg++;
    }
    if(e<0)
    {
        neg++;
    }
    //odd --------------
    if(a%2 != 0)
    {
        odd++;
    }
    if(b%2 != 0)
    {
        odd++;
    }
    if(c%2 != 0)
    {
        odd++;
    }
    if(d%2 != 0)
    {
        odd++;
    }
    if(e%2 != 0)
    {
        odd++;
    }
    //even --------------
    if(a%2 == 0)
    {
        even++;
    }
    if(b%2 == 0)
    {
        even++;
    }
    if(c%2 == 0)
    {
        even++;
    }
    if(d%2 == 0)
    {
        even++;
    }
    if(e%2 == 0)
    {
        even++;
    }

    printf("%d valor(es) par(es)\n", even);
    printf("%d valor(es) impar(es)\n", odd);
    printf("%d valor(es) positivo(s)\n", pos);
    printf("%d valor(es) negativo(s)\n", neg);

    return 0;
}
