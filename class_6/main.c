#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main(){
    int i = 0;
    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;


    printf("What would you like to buy? ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item)-1] = '\0';

    printf("What is the price per unit? ");
    scanf("%f", &price);

    printf("How many would you like to buy? ");
    scanf("%d", &quantity);

    total = price * quantity;

    if (quantity == 1) {
        printf("\nYou bought %d %s for the total of %c%.2f", quantity, item, currency, total);
        return 0;

    }else if (quantity == 0) {
        printf("\nNothing was bought");
        return 0;
    }else {
        printf("\nYou bought %d %ss for the total of %c%.2f", quantity, item, currency, total);
        return 0;
    }
}