#include <stdio.h>

int fatorial(int n){
    if (n == 0 || n == 1){
        return 1;
    } else {
        return n * fatorial(n -1);
    }
}
 int main() {
   int N;
   printf("Digite o valor de N: ");
   scanf("%d", &N);

   if (N < 0) {
     printf("N deve ser um número não negativo.\n");
     return 1;   
   }
 
   double S = 1.0;
   for (int i = 1; i <= N; i++){
     S += (double)fatorial(i);
   }
   
   printf("A somatória S é: %.21f\n", S);

  return 0;
 }




