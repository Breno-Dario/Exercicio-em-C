#include <stdio.h>

int main(){
    int populacao_A = 50000000;
    int populacao_B = 70000000;
    float taxa_natalidade_A = 0.03;
    float taxa_natalidade_B = 0.02;
    int anos = 0;

    while (populacao_A <= populacao_B){
        populacao_A += populacao_A * taxa_natalidade_A;
        populacao_B += populacao_B * taxa_natalidade_B;
        anos++;
    }

   printf("Levará %d anos para população do país utrapassara a população B.\n",anos);

   return 0;


}