#include <stdio.h>

int main(){
    char letra;

    printf("Digite uma letra: \n");
       scanf(" %c", &letra);

    if ((letra >= 'a' && letra <= 'z') || (letra >= 'A' && letra <= 'Z'))  {
       if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
       letra == 'A' || letra == 'E' || letra == 'I'|| letra =='O' || letra == 'U') {
          printf("A letra '%c' é uma vogal. \n", letra);
       } else {
          printf("A letra '%c' é uma consoante.\n", letra);
       }
    } else {
       printf("Isso não pe uma lera válida.\n");
    }

     return 0;
}