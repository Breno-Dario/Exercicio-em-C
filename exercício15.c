#include <stdio.h>
#include <math.h>

int main (){
    double  altura1, sombra1, sombra, altura;

printf("Digite a altura da pessoa: ");
    scanf("%lf", &altura1);

printf("Digite a sombra da pessoa em metros: ");
    scanf("%lf", &sombra1);

printf("Digite a sombra do prédio em metros: ");
    scanf("%lf", &sombra);

altura = ( altura1 + sombra ) / sombra1;

printf("A altura do prédio é: %.2lf metros\n", altura);

return 0;


}