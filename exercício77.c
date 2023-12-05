#include <stdio.h>
#include <string.h>

void inverterString(char *str) {
    int inicio = 0;
    int fim = strlen(str) - 1;

    while (inicio < fim) {

        char temp = str[inicio];
        str[inicio] = str[fim];
        str[fim] = temp;


        inicio++;
        fim--;
    }
}

int main() {
    char original[100];


    printf("Digite uma string: ");
    fgets(original, sizeof(original), stdin);

    original[strcspn(original, "\n")] = '\0';

    inverterString(original);

    printf("String invertida: %s\n", original);

    return 0;
}
