#include <stdio.h>

int main(){
    int N;

    printf("Digite o número do termor N: ");
       scanf("%d", &N);

    if (N < 1){
        printf("N deve ser pelo menos 1.\n");
        return 1;
    }   

   double pi = 0.0;
   int demoninador = 1;
   int sinal = 1;

   for (int i = 0; i <= N; i++){
     pi += (double)sinal / demoninador;
     sinal *= -1;
     demoninador *= 2;
   }

   pi *= 4;

   printf("O valor aproximado de n com %d termos é: %.10lf\n", N, pi);

   return 0;
}