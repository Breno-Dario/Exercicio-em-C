#include <stdio.h>

int main() {
double pluviometria[30];
double somaPrimeiraQuinzena = 0.0, somaSegundaQuinzena;
double mediaPrimeiraQuizena, mediaSegundaQuizena;
int diaMaisChuvoso = 1, diaMenosChuvoso = 1;

for(int i = 0; i < 30; i++){
printf("Digite o indice pluviométrico para o dia %d de Junho: ", i + 1);
scanf("%lf", &pluviometria[i]);

if (pluviometria[i] > pluviometria[diaMaisChuvoso - 1]){
    diaMaisChuvoso = i + 1;
}
if (pluviometria[i] < pluviometria[diaMenosChuvoso - 1]){
    diaMenosChuvoso = i + 1;
}

if (i < 15){
    somaPrimeiraQuinzena += pluviometria[i];
} else {
    somaSegundaQuinzena += pluviometria[i];
}
}

 mediaPrimeiraQuizena = somaPrimeiraQuinzena / 15.0;
 mediaSegundaQuizena = somaSegundaQuinzena / 15.0;

printf("Dia mais chuvoso: Dia %d\n", diaMaisChuvoso);
printf("Dia menos chuvoso: Dia %d\n", diaMenosChuvoso);
printf("Média pluviométria da primeiro quizena: %.2lf\n", mediaPrimeiraQuizena);
printf("Média pluviométria da segunda quizena: %.2lf\n", mediaSegundaQuizena);

return 0;
}