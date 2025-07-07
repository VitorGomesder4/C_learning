#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float x = 45;
    int absolute_numba = -3;
    //x = sqrt(x);
    //x = pow(x, 2);

    //x = round(x); //rounds for the nearest destiny example 3.14 would round to 3.00
    //x = ceil(x); //always round up
    //x = floor(x); // always round down

    //x = abs(x); //gives the absolute value of number example -1 would be 1, also needs to #include <stdlib.h>
    absolute_numba = abs(absolute_numba);

    //x = log(x);

    //trigonometry:
    //x = sin(x);
    //x = cos(x);
    x = tan(x);

    printf("%f\n", x);
    printf("%d", absolute_numba);
    return 0;
}