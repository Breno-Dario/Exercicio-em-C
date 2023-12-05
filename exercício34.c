#include <stdio.h>

int main(){
    double rendaMensal, valorEmprestimo, valorPrestacao;
    int numPrestacoes;


printf("Digite a sua renda mensal: \n");
scanf("%lf", &rendaMensal);

printf("Digite seu valor do emprestimo: \n");
scanf("%lf", &valorEmprestimo);

printf("Digite o valor da prestação: \n");
scanf("%lf", &valorPrestacao);

valorPrestacao = valorEmprestimo / numPrestacoes;

if (valorEmprestimo <= 10 * rendaMensal && valorEmprestimo <= 0.03 * rendaMensal) {
 printf("O empréstimo pode ser concedido.\n");   
} else {
    printf("O empréstimo não pode ser concedido \n");
}
return 0;
}