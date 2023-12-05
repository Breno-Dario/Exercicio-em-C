#include <stdio.h>
#include <math.h>

int main(){
   float a, b, x;

   printf("Digite o coeficiente a : ");
      scanf("%f", &a);
   printf("Digite o coeficiente b : ");
      scanf("%f", &b);

 if (a == 0) {
    if (b == 0) {
        printf("A equação é inderterminada, tem infinitas soluções\n");
    } else {
        printf("A equação é impossivel, não possui solução\n");
    } 
    } else {
    x = -b/ a;
    printf("A raiz da equação de x = %f\n", x);
  }

return 0;

}