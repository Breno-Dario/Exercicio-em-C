#include <stdio.h>

int main(){
    double passesTentados, passesCompletos, jardasPassadas, passesTouchdown, passeInterceptados;
    double rating;

   printf("Informe o número de passes tentados: ");
   scanf("%lf", &passesTentados);

   printf("Informe o número de passes completos: ");
   scanf("%lf", &passesCompletos);

   printf("Informe o número de jardas passadas: ");
   scanf("%lf", &passesTouchdown);

   printf("Informe número de passes intereptados: ");
   scanf("%lf", &passeInterceptados);

   double completionsPercentage = (passesCompletos / passesTentados - 0.3) / 0.2;
    completionsPercentage = (completionsPercentage > 2.375) ? 2.375 : completionsPercentage;
    completionsPercentage = (completionsPercentage < 0) ? 0 : completionsPercentage;

    double yardsPerAttempt = (jardasPassadas / passesTentados - 3) / 4;
    yardsPerAttempt = (yardsPerAttempt > 2.375) ? 2.375 : yardsPerAttempt;
    yardsPerAttempt = (yardsPerAttempt < 0) ? 0 : yardsPerAttempt;

    double touchdownsPerAttempt = (passesTouchdown / passesTentados) / 0.05;
    touchdownsPerAttempt = (touchdownsPerAttempt > 2.375) ? 2.375 : touchdownsPerAttempt;
    touchdownsPerAttempt = (touchdownsPerAttempt < 0) ? 0 : touchdownsPerAttempt;

    double interceptionsPerAttempt = ( passeInterceptados / passesTentados - 0.095) / 0.04;
    interceptionsPerAttempt = (interceptionsPerAttempt > 2.375) ? 2.375 : interceptionsPerAttempt;
    interceptionsPerAttempt = (interceptionsPerAttempt < 0) ? 0 : interceptionsPerAttempt;

    rating = (( completionsPercentage + yardsPerAttempt + touchdownsPerAttempt + interceptionsPerAttempt) / 6) * 100;
   
    printf("O QB Rating é: %.2lf\n", rating);


return 0;
}