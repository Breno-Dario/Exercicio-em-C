#include <stdio.h>
#include <math.h>

int main (){
    double num1, num2, num3;

    printf("Digite o primeiro número: ");
         scanf("%lf", &num1);

    printf("Digite o segundo número: ");
         scanf("%lf", &num2);

    printf("Digite o terceiro número: ");   
         scanf("%lf", &num3);

if (num1 >= num2 && num1 >= num3) {
        printf("%.2lf é o maior número.\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("%.2lf é o maior número.\n", num2);
    } else {
        printf("%.2lf é o maior número.\n", num3);
    }

return 0;

}