#include <stdio.h>
#include <string.h>

int contemSubstring(const char *str1, const char *str2) {
    return (strstr(str1, str2) != NULL);
}

int main() {
    char string1[100];
    char string2[100];

    printf("Digite a primeira string: ");
    fgets(string1, sizeof(string1), stdin);

    string1[strcspn(string1, "\n")] = '\0';

    printf("Digite a segunda string: ");
    fgets(string2, sizeof(string2), stdin);

    string2[strcspn(string2, "\n")] = '\0';

    if (contemSubstring(string1, string2)) {
        printf("A primeira string contém a segunda.\n");
    } else {
        printf("A primeira string não contém a segunda.\n");
    }

    return 0;
}
