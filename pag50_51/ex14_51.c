#include <stdio.h>

int main(){
    float anonasce;
    float anoatual;
    float idadeano;
    float idademeses;
    float idadedia;
    float idadesemana;
    printf("em que ano voce nasceu?\n");
    scanf("%f%*c", &anonasce);
    printf("em que ano estamos?\n");
    scanf("%f%*c", &anoatual);
    idadeano = anoatual - anonasce;
    idademeses = idadeano * 12;
    idadedia = idadeano * 365;
    idadesemana = idadeano * 52;
    printf("voce tem %.0f anos\n", idadeano);
    printf("voce viveu %.0f meses na sua vida toda\n", idademeses);
    printf("voce viveu %.0f dias durante toda a sua vida\n", idadedia);
    printf("voce viveu %.0f semanas durante toda a sua vida\n", idadesemana);

    return 0;
}