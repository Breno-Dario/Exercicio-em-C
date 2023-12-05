#include <stdio.h>
#include <math.h>

int main (){
   int valor, nota[7] = {100, 50, 20, 5, 2, 1};
   int quantidadeNotas[7] = {0};

   printf("Digite o valor da nota a ser retirado: ");
       scanf("%d", &valor);

   int i = 0;
   while (valor > 0 && i < 7) {
      quantidadeNotas[i] = valor / nota[i];
        valor %= nota[i];
        i++;
   }    
    
    printf ("Distribuição das notas: \n");
    for (i = 0; i < 7; i++) {
        if (quantidadeNotas[i > 0]) {
            printf("%d notas(s) de R$ %d,00\n", quantidadeNotas[i], nota[i]);

        }
    }
    return 0;
}