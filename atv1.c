#include<stdio.h>

int main(){

    int golsG[50],golsI[50];
    int partida = 0, outraPartida, countInter = 0, countGremio = 0,countEmpate = 0, golsMax = 0;

    do{
        if (partida >= 10)
        {
            printf("Chegou ao numero limite de grenais!\nQue sao %d partidas",partida);
            break;
        }

        //Gols
        printf("Quantos gols o gremio marcou no grenal?");
        scanf("%d",&golsG[partida]);
        printf("Quantos gols o inter marcou no grenal?");
        scanf("%d",&golsI[partida]);

        //Quem ganhou
           if (golsG[partida] > golsI[partida])
        {
            printf("Gremio ganhou\n");
            countGremio++;
        }else if(golsG[partida] < golsI[partida]){
            printf("Inter ganhou\n");
            countInter++;
        }else{
            printf("Empate\n");
            countEmpate++;
        }

        //Partidas mais gols
        if (golsG[partida] + golsI[partida] > golsMax)
        {
            golsMax = golsG[partida] + golsI[partida];
        }
        

        //Numero partida e outra partida
        printf("%d\n",partida);
        partida++;
        
        printf("Teve outra partida?(1.Sim 2.Nao)\n");
        scanf("%d",&outraPartida);

    }while(outraPartida == 1);

    //Estatisticas
    printf("%d grenais fizeram parte da estatistica\n",partida);
    printf("%d jogo(s) vencido(s) pelo gremio\n",countGremio);
    printf("%d jogo(s) vencido(s) pelo inter\n",countInter);
    printf("%d empates\n",countEmpate);

    //Quem ganhou mais
    if(countInter > countGremio){
        printf("Inter ganhou o maior numero de grenais\n");
    }else if(countInter < countGremio){
        printf("Gremio ganhou o maior numero de grenais\n");
    }else{
        printf("Nao houve um vencedor\n");
    }

    //partida com mais gols
    printf("O(s) jogo(s) com mais gols foram\n");
    for(int i = 0; i < partida; i++){
        if (golsG[i] + golsI[i] == golsMax)
        {
            printf("Grenal %d, Internacional %d x %d Gremio\n",i+1,golsI[i],golsG[i]);
        }
        
    }
    


    return 0;
}