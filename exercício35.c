#include <stdio.h>

int main(){
    int numeroDias;

    printf("Digite um número de dia de (1 a 7):  ");
    scanf("%d", &numeroDias);

    switch (numeroDias){
    case 1: 
       printf("Segunda-feira.\n");
    break;
    case 2: 
       printf("Terça-feira.\n");
    break;
    case 3:
       printf("Quarta-feira.\n");
    break;
    case 4:
       printf("Quinta-feira.\n");
    break;
    case 5:
       printf("Quinta-feira.\n");
    break;
    case 6: 
       printf("Sexta-feira.\n");
    break;
    case 7:
        printf("Sábado.\n");
    break;
    default:
       printf("Erro, digite de 1 a 7.\n");
    break;                         

}
  return 0;
}
