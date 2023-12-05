#include <stdio.h>

#define TAMANHO_MAXIMO 30


void imprimirVetor(int vetor[], int tamanho) {
    printf("Vetor: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}


void inserirNoFinal(int vetor[], int *tamanho, int elemento) {
    if (*tamanho < TAMANHO_MAXIMO) {
        vetor[*tamanho] = elemento;
        (*tamanho)++;
        printf("Elemento %d inserido no final do vetor.\n", elemento);
    } else {
        printf("Erro: O vetor está cheio. Não é possível inserir mais elementos.\n");
    }
}


void inserirNaPosicao(int vetor[], int *tamanho, int elemento, int posicao) {
    if (*tamanho < TAMANHO_MAXIMO && posicao >= 0 && posicao <= *tamanho) {

        for (int i = *tamanho; i > posicao; i--) {
            vetor[i] = vetor[i - 1];
        }

        vetor[posicao] = elemento;
        (*tamanho)++;
        printf("Elemento %d inserido na posição %d do vetor.\n", elemento, posicao + 1);
    } else {
        printf("Erro: Posição inválida ou o vetor está cheio.\n");
    }
}


void removerDaPosicao(int vetor[], int *tamanho, int posicao) {
    if (posicao >= 0 && posicao < *tamanho) {

        for (int i = posicao; i < *tamanho - 1; i++) {
            vetor[i] = vetor[i + 1];
        }

        (*tamanho)--;
        printf("Elemento removido da posição %d do vetor.\n", posicao + 1);
    } else {
        printf("Erro: Posição inválida.\n");
    }
}


void removerElemento(int vetor[], int *tamanho, int elemento) {
    int i = 0;
    while (i < *tamanho) {
        if (vetor[i] == elemento) {

            for (int j = i; j < *tamanho - 1; j++) {
                vetor[j] = vetor[j + 1];
            }
            (*tamanho)--;
        } else {
            i++;
        }
    }
    printf("Todos os elementos iguais a %d foram removidos do vetor.\n", elemento);
}


void removerDuplicidades(int vetor[], int *tamanho) {
    for (int i = 0; i < *tamanho - 1; i++) {
        for (int j = i + 1; j < *tamanho;) {
            if (vetor[i] == vetor[j]) {

                for (int k = j; k < *tamanho - 1; k++) {
                    vetor[k] = vetor[k + 1];
                }
                (*tamanho)--;
            } else {
                j++;
            }
        }
    }
    printf("Duplicidades removidas do vetor.\n");
}

int main() {
    int vetor[TAMANHO_MAXIMO];
    int tamanho = 0;
    int opcao, elemento, posicao;

    do {
        printf("\nEscolha uma operação:\n");
        printf("1. Inserir no final do vetor\n");
        printf("2. Inserir em uma posição\n");
        printf("3. Remover de uma posição\n");
        printf("4. Remover todos elementos iguais a um valor\n");
        printf("5. Gerar novo array sem duplicidades\n");
        printf("0. Sair\n");

        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o elemento a ser inserido no final do vetor: ");
                scanf("%d", &elemento);
                inserirNoFinal(vetor, &tamanho, elemento);
                break;

            case 2:
                printf("Digite o elemento a ser inserido: ");
                scanf("%d", &elemento);
                printf("Digite a posição (1 a %d) onde o elemento será inserido: ", tamanho + 1);
                scanf("%d", &posicao);
                inserirNaPosicao(vetor, &tamanho, elemento, posicao - 1);
                break;

            case 3:
                printf("Digite a posição (1 a %d) do elemento a ser removido: ", tamanho);
                scanf("%d", &posicao);
                removerDaPosicao(vetor, &tamanho, posicao - 1);
                break;

            case 4:
                printf("Digite o elemento a ser removido: ");
                scanf("%d", &elemento);
                removerElemento(vetor, &tamanho, elemento);
                break;

            case 5:
                removerDuplicidades(vetor, &tamanho);
                break;

            case 0:
                printf("Programa encerrado.\n");
                break;

            default:
                printf("Opção inválida. Tente novamente.\n");
                break;
        }

        imprimirVetor(vetor, tamanho);

    } while (opcao != 0);

    return 0;
}
