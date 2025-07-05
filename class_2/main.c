#include <stdio.h>
#include <stdbool.h>

int main(){
    int age = 18; float height = 1.75; char grade = 'S';
    int year = 2025; 
    int arms = 2; 
    float celsius = 20; 
    double pi = 3.14159265358979323846264338327950288419716939937510;
    char name[] = "Victoria", fruit[] = "apple"; // In C we store strings as an array of characters
    bool young; // for the use of bool data type we need to include standard bool <stdbool.h>

    printf("You have %d years and %.2f height, N your grade was '%c'\n", age, height, grade);
    printf("We're at %d\n", year);
    printf("You have %d arms\n", arms);
    printf("The temperature is %.1f°C\n", celsius);
    printf("PI == %.15lf\n", pi);
    printf("\nHello %s want this %s?\n", name, fruit);

    if (age < 30) {
        young = true;
        printf("\nAre you young? : %d(Yea) :D", young);
    }else {
        young = false;
        printf("\nAre you young? : %d(Nope) ;-;", young);
    }
    return 0;
}