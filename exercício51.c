#include <stdio.h>
int main(void){
 int N = 0;
 int x1 = 0;
 int x2 = 1;
 int x3 = 1;
 
 printf("Número de elementos: ");
 scanf("%i", &N);
 
 for (int i = 1; i < N; i++)
 {
  x3 = x1 + x2;
  printf("\n%i\n", x3);
  x1 = x2;
  x2 = x3;
 }
 
 return 0;
}