#include <stdio.h>
#include <math.h>

int main(){
    double distancia, velocidade, aceleracao, tempo;

printf("Digite a distância desde o semáforo anterior em metros: ");
   scanf("%lf", &distancia);

printf("Digite a velocidade permitida da via em m/s: ");
   scanf("%lf", &velocidade);

printf("Digite a aceleração dp carro em m/s ^ 2 : ");
   scanf("%lf", &aceleracao);

tempo = sqrt((2 * distancia) / aceleracao);

printf("O próximo semáforo deve abrir %.2lf segundos antes da chegada do carro. \n", tempo);

return 0;

}