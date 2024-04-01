#include <stdio.h>

int main() {

    float zahl1;
    float zahl2;
    char operator;

    printf("Gebe die erste Zahl ein: ");
    scanf("%f", &zahl1);

    printf("\nGebe die zweite Zahl ein: ");
    scanf("%f", &zahl2);

    printf("\nGebe einen Operator (+,-,*,/) ein: ");
    scanf(" %c", &operator);


    printf("\n\n");
//    printf("%f %f %c", zahl1, zahl2, operator);

    if(operator == '+') {
        printf("%f + %f = %f", zahl1, zahl2, zahl1 + zahl2);
    }
    if(operator == '-') {
        printf("%f - %f = %f", zahl1, zahl2, zahl1 - zahl2);
    }
    if(operator == '*') {
        printf("%f * %f = %f", zahl1, zahl2, zahl1 * zahl2);
    }
    if(operator == '/') {
        printf("%f / %f = %f", zahl1, zahl2, zahl1 / zahl2);
    }


    return 0;
}
