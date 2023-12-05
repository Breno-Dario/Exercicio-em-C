#include <stdio.h>
#include <math.h>

int main(void){
    int array[10];
    int i, countPares = 0;
    
 
 printf("Digite 10 números inteiros: ");
 for (i = 0; i < 10; i++){
     scanf("%d", &array[i]);
 }

 for ( i = 0; i < 10; i++) {
    if (array[i] % 2 == 0){
        countPares++;
    }
 }
 
 printf("Quantidade de números pares no array: %d\n", countPares);

return 0;
}