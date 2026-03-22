#include <stdio.h>
#include <string.h>

int main() {
    char username[] = "Rakesh";
    char inputUser[20];
    char password[]="125690";
    char inputPass[10];


    printf("Enter username: ");
    scanf("%19s", inputUser);


    printf("Enter password:");
    scanf("%9s", inputPass);


    if (strcmp(username, inputUser) == 0) {

        if (strlen(inputPass) <= 6) {
            printf("Login successful!\n");

        } else {
            printf("Password must be 6 digits max.\n");        }

    } else {
        printf("Invalid pasSword.\n");
    }

    return 0;
}
