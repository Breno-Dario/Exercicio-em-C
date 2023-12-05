#include <stdio.h>

int main(){
    float notaI, notaII, notaIII, notaIV, notaV;
    float media;

    printf("Digite a nota do exame I: ");
    scanf("%f", &notaI);

    printf("Digite a nota do exame II: ");
    scanf("%f", &notaII);

    printf("Digite a nota do exame III: ");
    scanf("%f", &notaIII);

    printf("Digite a nota do exameIV: ");
    scanf("%f", &notaIV);

    printf("Digite a nota do exame V: ");
    scanf("%f", &notaV);

    media = (notaI + notaII + notaIII + notaIV + notaV) / 5;

  if (media >= 70 && notaI >= 70 && notaII >= 70 && notaIII >= 70 && notaIV && notaV >= 70 ){
    printf("Classuficação: A - Passou em todos exames.\n");
  }  else if (notaI >= 70 && notaII >= 70 && (notaIII < 70 || notaV <70)){
    printf("Classificação B - Passou em I, II E IV, mas não III ou V.\n");  
  } else if ((notaI >= 70 && notaII >= 70) || (notaI >= 70 && notaIV)|| (notaI >= 70 && notaIII >= 70) ||(notaII >= 70 && notaIII >= 70) || (notaIV >= 70 && notaIII >= 70)){
    printf("Classificação: C - Passou em I e II, III ou IV, mas não em V. \n");
  } else {
    printf("Classificação: Reprovado - Outras situações.\n");
  }
  return 0;
}