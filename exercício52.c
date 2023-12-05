#include <stdio.h>

int main() {
    int termo1, termo2, n;

    printf("Digite os dois primeiros termos da série de FETUCCINE: ");
    scanf("%d %d", &termo1, &termo2);

    printf("Digite a quantidade de termos a serem gerados (N): ");
    scanf("%d", &n);

    if (n < 3) {
        printf("Para existir a série de FETUCCINE, são necessários pelo menos três termos.\n");
    } else {
        printf("Os primeiros %d termos da série de FETUCCINE são:\n", n);
        printf("%d %d ", termo1, termo2);

        for (int i = 3; i <= n; i++) {
            int termoAtual;
            if (i % 2 == 1) {
                termoAtual = termo1 + termo2;
            } else {
                termoAtual = termo2 - termo1;
            }

            printf("%d ", termoAtual);

            termo1 = termo2;
            termo2 = termoAtual;
        }

        printf("\n");
    }

    return 0;
}

