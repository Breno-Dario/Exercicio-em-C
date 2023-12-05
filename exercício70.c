#include <stdio.h>

#define TAMANHO_MAXIMO 100

int main(){
 int array[TAMANHO_MAXIMO];
 int tamanho = 0;

 printf("Digite os elementos do array (ou digite -1 para parar):\n");

 int elemento;
 do {
    if (tamanho >= TAMANHO_MAXIMO){
        printf("Tamanho máximo atigindo. Oarando a entrada de dados.");
        break;
    }

    printf("Elemento %d: ", tamanho + 1);
    scanf("%d", &elemento);

    if (elemento != -1) {
        array[tamanho] = elemento;
        tamanho++;
    } 
 } while ( elemento != -1);
 
printf("\nArray carregado: \n");
for (int i = 0; i < tamanho; i++){
    printf("%d", array[i]);
}
printf("\n");

return 0;

 }


// Retorna a posição se a chave for encontrada
