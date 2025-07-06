#include <stdio.h>

int main(){
    // Format specifiers

    int num1 = 1, num2 = 20, num3 = -300;

    printf("%+d\n",num1);
    printf("%5d\n",num2);
    printf("%+d\n",num3);

    float price1 = 20.99, price2 = 1.50, price3 = -100.00;

    printf("\n%+8.2f\n", price1);
    printf("%+.3f\n", price2);
    printf("%+.4f\n", price3);

    return 0;
}