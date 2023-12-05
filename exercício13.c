#include <stdio.h>

int main(){
    double R1, R2, R3, Req;

printf("Digite o valor da resistência R1 em ohms: "); 
   scanf("%lf", &R1);

printf("Digite o valor da resistência R2 em ohms: ");
   scanf("%lf", &R2);

printf("Digite o valor da resistência R2 em ohms; ");
   scanf("%lf", &R3);

   Req = R3 + (1 / ((1 / R1) + (1 / R2)));

 printf("A resistência equivalente do circuito é: %.2lf ohms\n", Req);

 return 0;  


}