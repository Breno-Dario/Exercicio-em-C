#include <stdio.h>

int main(){
   double  bimestre, prova1, prova2, prova3, prova4;

   printf("Digite a primeira nota da sua prova do 1 bimestre: ");
         scanf("%lf", &prova1);

   printf("Digite a segunda nota da sua prova do 1 bimestre: ");
         scanf("%lf", &prova2);      

   printf("Digite a sua terceira prova 2 bimestre:");
         scanf("%lf", &prova3);

   printf("Digite a quarta nota da sua prova 2 bimestre: ");
        scanf("%lf", &prova4);

bimestre = (prova1 + prova2 + prova3 + prova4) / 4.0;

printf("A nota bimestral do aluno é: %.2lf\n", bimestre);

return 0;

}