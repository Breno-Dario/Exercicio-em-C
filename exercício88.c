#include <stdio.h>
#include <ctype.h>

int main() {
    char input[100];

    printf("Digite uma string: ");
    fgets(input, sizeof(input), stdin);

    for (int i = 0; input[i] != '\0'; i++) {
        input[i] = toupper(input[i]);
    }

    printf("String em caixa alta: %s\n", input);

    return 0;
}
