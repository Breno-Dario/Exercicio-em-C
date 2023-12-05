#include <stdio.h>

int main(){
   int i, soma = 1; 

for (i = 1; i <= 100; i++) {
    printf("%d\n", i);
    soma += i;
}
    printf("A soma de todos os números de 1 a 100 é %d\n", soma);
    
return 0;
}