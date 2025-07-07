#include <stdio.h>
#include <math.h>

int main(){
    
    const double PI = 3.14159;
    double radius = 0.0;
    double area = 0.0;
    double volume = 0.0;
    double area_sphere = 0.0;

    printf("Radius: ");
    scanf("%lf", &radius);

    // AREA = PI * RADIUS²

    area = PI * pow(radius, 2);

    volume = (4.0/3.0) * PI * pow(radius, 3);

    area_sphere = 4*PI*pow(radius, 2);

    printf("\narea %.2lf\narea_sphere %.2lf\nvolume %.2lf", area, area_sphere, volume);

    return 0;
}