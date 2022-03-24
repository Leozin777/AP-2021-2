/*
O departamento que controla o índice de poluição do meio ambiente mantém 3 grupos de indústrias que são altamente
poluentes do meio ambiente. O índice de poluição aceitável varia de 0.05 até 0.25. Se o índice sobe para 0.3 as
indústrias do primeiro grupo são intimadas a suspenderem suas atividades, se o índice cresce para 0.4 as do primeiro
e segundo grupo são intimadas a suspenderem suas atividades e se o índice atingir 0.5 todos os 3 grupos devem ser
notificados a paralisarem suas atividades. FUP que lê o índice de poluição medido e emite a notificação adequada aos
diferentes grupos de empresas.
*/
#include <stdio.h>

int main(){
    float ind;

    printf("Qual o indice de poluicao?\n");
    scanf("%f%*c", &ind);

    if(ind <= 0.05 && ind <= 0.25){
        printf("o indicie esta aceitavel.");
    } else if(ind <= 0.3){
        printf("O primeiro grupo foi intimado a suspender as suas atividades.");
    } else if(ind <= 0.4){
        printf("O primeiro e o segundo grupo foram intimados a suspender as suas atividades.");
    } else if(ind <= 0.5){
        printf("[ATENCAO] Todos os grupos foram intimados a suspender as suas atividades.");
    } else {
        printf("[ERRO] Valor invalido, reinicie o programa");
    }

    return 0;
}