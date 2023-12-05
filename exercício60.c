#include <stdio.h>
#include <stdbool.h>

bool ehPrimo(int numero){
    if (numero <= 1) {
        return false;
    }
for (int i = 2; i * i <= numero; i++){
    if(numero % i == 0){
        return false;
    }
}    
  return true;
}

int main() {
  for (int n= 500; n <= 1000; n +=2) {
   bool encontrou = false;
   for (int i = 1; i <= n / 2; i++) {
      if(ehPrimo(i) && ehPrimo(n - i)) {
        printf("%d = %d + %d\n", n, i, n - 1);
        encontrou = true;
        break;
      }
   }
   if (!encontrou){
      printf("Não foi possivel encontrar dois primos que somem a %d.\n",n);
   }
  }

  return 0;
}