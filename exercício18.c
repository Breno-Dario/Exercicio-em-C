#include <stdio.h>

int main(){
    int a, b;

printf("Digite o valor de a : "); 
    scanf("%d", &a);
printf("Digite o valor de b : "); 
    scanf("%d", &b);

int temp = a;
a = b;        
b = temp;

printf("Depois da permutação: \n");
printf("a = %d\n", a);
printf("b = %d\n", b);

return 0;


}