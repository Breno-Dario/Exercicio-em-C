#include <stdio.h>

int main() {
   double x, y;

   printf("Digete as coordenadas (x,y): ");
   scanf("%lf %lf", &x, &y);

   if ( x == 0 && y == 0){
    printf("O ponto (%.2lf, %.2lf) está na origem.\n", x, y);
   } else if (x == 0){
    printf("O ponto (%.2lf, %.2lf) está sobre p eixo das ordenadas (eixo Y).\n", x, y);
   } else if ( y == 0){
    printf("O pontp (%.2lf, %.2lf) está sobre o eixo das abscissas (eixo X).\n", x, y);
   } else if ( x > 0 && y > 0){
    printf("O ponto (%.2lf, %.2lf) está no primeiro quadrante.\n", x, y);
   } else if ( x < 0 && y > 0){
    printf("O ponto (%.2lf, %.2lf) está no segundo quadrante.\n", x, y);
   } else {
    printf("O ponto (%.2lf, %.2lf) está no quarto quadrante.\n", x, y);
   }
   
return 0;

}