#include <stdio.h>

int main(){
   int num1, num2, num3;

   printf("Digite três valores inteiros separados pro espaços: ");
      scanf("%d %d %d", &num1, &num2, &num3 );

   if (num1 >= num2 && num1 >= num3) {

    if (num2 >= num3) {
        printf("A soma dos dois valores é %d\n", num1 + num2);
    }else {
        printf("A soma dos dois valores é %d\n", num1 + num3);
    }
   } else if (num2 >= num1 && num2 >= num3){
    
      if (num1 >= num3){
         printf("A soma dos dois valores é %d\n", num2 + num1);
      } else {
         printf("A soma dos dois valores é %d\n", num2 + num3);
      }
} else {
    if (num1 >= num2) {
    printf("A soma dos dois valores é %d\n", num3 + num1);
}  else {
    printf("A soma dos dois valores é %d\n", num3 + num2);
   } 
 
return 0;

}
  
   



}