#include <stdio.h>
#include <math.h>

int main(){
     int numero, inverso;

printf("Digite um número com três algarismos: ");
     scanf("%d", &numero);

if (numero < 100 || numero > 999){
    printf("O número não tem três algarismos. \n");

} else {

    int algarismo;
    
    while (numero > 0){
        algarismo = numero % 10;
        inverso = (inverso * 10) + algarismo;
        numero = numero / 10;
        
    }
    
    printf("O número inverso é: %d\n", inverso);

}

return 0;

}