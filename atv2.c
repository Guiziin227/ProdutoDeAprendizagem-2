#include<stdio.h>

int main(){

    int amostragem[10], total = 0, maiorValor = 0;
    float porcentagem[10], maiorPercentual = 0.0;

    for(int i = 0; i < 10; i++){
        printf("Digite 10 valores para uma amostra este e %d: \n", i);
        scanf("%d",&amostragem[i]);
        total += amostragem[i];
    }

    for(int i = 0; i < 10; i++){
        porcentagem[i] = (float)amostragem[i] / total * 100;
    }

    float media = (float)total/10;

    for (int i = 0; i < 10; i++)
    {
        if(amostragem[i] > maiorValor){
            maiorValor = amostragem[i];
            maiorPercentual = porcentagem[i];
        }
    }
    

    printf("\nValores e percentuais:\n");
    for (int i = 0; i < 10; i++) {
        printf("Valor: %d, Percentual: %.2f%%\n", amostragem[i], porcentagem[i]);
    }

    printf("A media e %.2f\n",media);

    printf("Maior valor %d e maior percentual %.2f", maiorValor, maiorPercentual);
    

    printf("\nValores acima da media:\n");
    for (int i = 0; i < 10; i++) {
        if (amostragem[i] > media) {
            printf("Valor: %d, Percentual: %.2f%%\n", amostragem[i], porcentagem[i]);
        }
    }
    


    return 0;
}