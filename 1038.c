#include <stdio.h>

int main(){
    int x, y;
    double price;
    scanf("%d%d", &x, &y);
    
    switch(x)
    {
    case 1:
        price = y * 4.00;
        break;
    case 2:
        price = y * 4.50;
        break;
    case 3:
        price = y * 5.00;
        break;
    case 4:
        price = y * 2.00;
        break;
    case 5:
        price = y * 1.50;
        break;
    }
    printf("Total: R$ %.2lf\n", price);
    
    return 0;
}
