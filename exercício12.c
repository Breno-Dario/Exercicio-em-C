#include <stdio.h>

int main(){
    double kmh, ms;

printf("Digite a velocidade m/s para converte em Km/h: ");
     scanf("%lf", &ms);

printf("Digite o valo de Km/h para converte em m/s: ");
     scanf("%lf", &kmh);

kmh = kmh / 3.6;
ms = ms * 3.6;

printf("A conversão de Km/h para m/s é de: %.2lf\n", ms);
printf("A conversão de m/s para km/h é de: %.2lf\n", kmh);


}
