#include <stdio.h>
#include <math.h>

int main() {

    //FORMULA : A = P*1+(r/n)^(n*t)

    double principal = 0.0, rate = 0.0, total = 0.0;

    int years = 0, timescompounded = 0;
    
    printf("Compound interest calculator");

    printf("Enter the principal (P): ");
    scanf("%lf", &principal);
    
    printf("Enter interest rate % (r): ");
    scanf("%lf", &rate);
    rate = rate / 100;

    printf("How many years to be invested (t):");
    scanf("%d", &years);

    printf("Times compounded per year (n): ");
    scanf("%d", &timescompounded);

    total = principal * pow((1 + rate/timescompounded), timescompounded * years);

    printf("Total: %.2lf", total);

    return 0;
}