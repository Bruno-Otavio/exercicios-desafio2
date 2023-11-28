#include <stdio.h>
#include <string.h>

FILE *user;

int main() {
    int decision;

    printf("\t\tLogin\n\n");

    printf("\t1. Login\n");
    printf("\t2. Register\n");

    scanf("%d", &decision);

    if (decision == 1) { // Login Option
        char login[64];
        char password[64];

        printf("Enter your login: ");
        scanf("%s", &login);

        printf("Enter your password: ");
        scanf("%s", &password);

        user = fopen(strcat(login, ".txt"), "r");
        if (user == NULL) {
            printf("Wrong login\n");
            return 1;
        }

        char file_login[64];
        char file_password[64];
        
        fscanf(user, "%s", &file_login);
        fscanf(user, "%s", &file_password);

        if (strcmp(login, file_login) == 0 && strcmp(password, file_password) == 0) {
            printf("You have succefully logged in");
        }

        fclose(user);
    } else {
        char login[64];
        char password[64];

        printf("\t\tRegister\n\n");
        
        printf("\tEnter your new login: ");
        scanf("%s", &login);

        printf("\tEnter your new password: ");
        scanf("%s", &password);

        user = fopen(strcat(login, ".txt"), "w");

        if (user == NULL) {
            printf("Couldn't open/create file");
            return 1;
        }

        fprintf(user, "%s\n", login);
        fprintf(user, "%s\n", password);

        fclose(user);
    }

    return 0;
}