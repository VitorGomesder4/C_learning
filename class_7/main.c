#include <stdio.h>
#include <string.h>

int main(){
    char noun[50] = "", verb[50] = "", adjective[50] = "", adjective2[50] = "", adjective3[50] = "";

    printf("Enter an adjective 1: ");
    fgets(adjective, sizeof(adjective), stdin);
    adjective[strlen(adjective)-1] = '\0';

    printf("Enter a noun: ");
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun)-1] = '\0';

    printf("Enter an adjective 2: ");
    fgets(adjective2, sizeof(adjective2), stdin);
    adjective2[strlen(adjective2)-1] = '\0';

    printf("Enter a verb(ending with 'ing'): ");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb)-1] = '\0';

    printf("Enter an adjective 3: ");
    fgets(adjective3, sizeof(adjective3), stdin);
    adjective3[strlen(adjective3)-1] = '\0';

    printf("noun : %s,\n verb : %s,\n adjective : %s,\n adjective2 : %s,\n adjective3 : %s\n", noun, verb, adjective, adjective2, adjective3);

    return 0;
}