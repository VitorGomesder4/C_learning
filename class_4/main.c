#include <stdio.h>

int main(){
    // arithmetic operators = + - * / % ++ --
    int x=9, y=4, z=0;

    //z = x + y;
    //z = x - y;
    //z = x * y;
    //z = x / y; //if the division is between integers any decimal portion will be discarded
    z = x % y; //Rest of the division

    x++;//increment from 9 to 10
    y--;//decrement from 4 to 3

    printf("%d", z);

    return 0;
}