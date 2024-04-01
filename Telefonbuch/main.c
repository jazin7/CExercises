#include <stdio.h>

int main() {
    char phoneNumbers[100][256] = {
            "+491111",
            "+492222",
            "+493333",
            "+494444",
    };
    int nextIndex = 4;

    start(nextIndex, phoneNumbers);

    return 0;
}

void start(int nextIndex, char phoneNumbers[100][256]) {
    if (showMenu() == 0) {
        showPhoneNumbers(nextIndex, phoneNumbers);
    } else {
        addPhoneNumber(nextIndex, phoneNumbers);
    }
}


void showPhoneNumbers(int nextIndex, char phoneNumbers[100][256]) {
    printf("Telefonnummern: \n");
    for(int i = 0; i < 10; i++){
        printf("%d. %s\n",i, &phoneNumbers[i]);
    }

    start(nextIndex, phoneNumbers);
}


void addPhoneNumber(int nextIndex, char phoneNumbers[100][256]) {
    printf("Neue Nummer hinzufuegen: ");
    char newNumber[256];
    scanf("%s", &newNumber);

    strcpy(phoneNumbers[nextIndex], newNumber);
    nextIndex++;
    start(nextIndex, phoneNumbers);
}


int showMenu() {
    int selection;

    printf("________WELCOME_________\n\n");
    printf("0. Telefonnummern anzeigen \n");
    printf("1. Telefonnummer hinzufuegen \n");
    scanf("%d", &selection);
    printf("\n\n");

    // erlaubt nur 0 oder 1 als Eingabe
    if (selection == 0 || selection == 1){
        return selection;
    } else {
        printf("Eingabe ungueltig\n");
        return showMenu();
    }
}