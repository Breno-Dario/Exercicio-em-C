#include <stdio.h>

int main(){
    double celsius, fahrenheit;

printf("Digite a temperatura em Fahreinheit: ");
scanf("%lf", &fahrenheit);

celsius = (5.0 / 9.0) * (fahrenheit - 32.0);

printf("A temperatura em Celsius é: %.2lf\n", celsius);

return 0;
    
}