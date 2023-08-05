#include <stdio.h>

int main(){
    int n, amount, i, sum, sumc, sumr, sums;
    char type;
    double perc, perr, pers;
    scanf("%d", &n);
    sum=0;
    sumc=0;
    sumr=0;
    sums=0;

    for(i=1; i<=n; i++)
    {
        scanf("%d %c", &amount, &type);
        sum = sum + amount;
        if(type == 'C')
        {
            sumc = sumc + amount;
        }
        if(type == 'R')
        {
            sumr = sumr + amount;
        }
        if(type == 'S')
        {
            sums = sums + amount;
        }
    }

    perc = (((double)sumc)/sum) * 100.00;
    perr = (((double)sumr)/sum) * 100.00;
    pers = (((double)sums)/sum) * 100.00;

    printf("Total: %d cobaias\n", sum);
    printf("Total de coelhos: %d\n", sumc);
    printf("Total de ratos: %d\n", sumr);
    printf("Total de sapos: %d\n", sums);
    printf("Percentual de coelhos: %.2lf %%\n", perc);
    printf("Percentual de ratos: %.2lf %%\n", perr);
    printf("Percentual de sapos: %.2lf %%\n", pers);

    return 0;
}
