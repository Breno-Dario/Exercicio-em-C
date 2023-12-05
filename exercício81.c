#include <stdio.h>
#include <string.h>

void normalizeString(const char *input, char *output) {
    int i, j;
    int isSpace = 0;

    for (i = 0, j = 0; input[i] != '\0'; i++) {
        if (input[i] == ' ') {
            if (!isSpace) {
                output[j++] = ' ';
                isSpace = 1;
            }
        } else {
            output[j++] = input[i];
            isSpace = 0;
        }
    }

    output[j] = '\0';
}

int main() {
    char input[100];
    char normalized[100];

    printf("Digite uma string: ");
    fgets(input, sizeof(input), stdin);

    normalizeString(input, normalized);

    printf("String normalizada: %s\n", normalized);

    return 0;
}
