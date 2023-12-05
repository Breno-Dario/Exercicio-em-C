#include <stdio.h>

int main(){
    int num1, num2, resto, quociente;

printf("Digite o primeiro número inteiro:");
    scanf("%d", &num1);

printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

quociente = num1 / num2;
resto = num1 % num2;

printf("O Quociente de sua divisão é %d\n", quociente);
printf("O resto de sua divisão é %d\n", resto);



}