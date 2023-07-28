#include <stdio.h>

int main(){
    int age, sum, i;
    double avg;
    i = 0;
    sum = 0;
    while(1)
    {
        scanf("%d", &age);
        sum += age;
        i++;
        if(age<0)
        {
            i--;
            sum -=age;
            avg = (double)sum/i;
            break;
        }
    }
    printf("%.2lf\n", avg);

    return 0;
}
