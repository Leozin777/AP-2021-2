#include <stdio.h>

int main(){
    float hora;
    float min;
    float horaConM;
    float totalMinutos;
    float minConSeg;
    printf("digita a hora:\n");
    scanf("%f%*c", &hora);
    printf("digite os minutos:\n");
    scanf("%f%*c", &min);

    horaConM = hora * 60;
    totalMinutos = min + horaConM;
    minConSeg = min * 60;

    printf("a hora digitada convertida em minutos: %.0f\n", horaConM);
    printf("o total dos minutos: %d\n", &totalMinutos);
    printf(" o total dos minutos convertidos em segundos: %.0f\n", minConSeg);



    return 0;
}