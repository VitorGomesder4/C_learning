#include <stdio.h>
#include <string.h>

int main(){
    int age = 0;
    float gpa = 0.0f;
    char grade = '\0'; // \0 == Terminator for clearance
    char name[20] = "";
    //we need to initialize variables before usings them

    printf("Age: ");
    scanf("%d", &age);

    printf("Gpa: ");
    scanf("%f", &gpa);

    printf("Grade: ");
    scanf(" %c", &grade); //Clearing buffer with the space before %c

    getchar(); //Clearing Buffer
    printf("Name: ");
    fgets(name, sizeof(name), stdin); //Since fgets includes the \n on the end of string when you hit enter
    name[strlen(name)-1] = '\0'; // We can get the last character in this case \n, and then terminate it with '\0'

    return 0;
}