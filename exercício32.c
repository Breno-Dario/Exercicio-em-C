#include <stdio.h>
#include <ctype.h>

int main(){
    char caractere;


printf("Digite um caractere: ");
scanf("%c", &caractere);

if (isalpha(caractere)){
    caractere = tolower(caractere);
    if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u') {
        printf("É uma vogal. \n");
    } else {
        printf("É uma cosoante. \n");
    }
}
     else if (isdigit(caractere)){
        printf("É um número.");
     }
    else {
        printf("É um símbolo. \n");
    }
return 0;
}
