/*FUP que leia o número da conta bancária e o saldo de um cliente.
 Caso a conta tenha saldo negativo, o programa deve enviar a seguinte mensagem:
  CONTA ESTOURADA, caso contrário CONTA NORMAL.*/

#include <stdio.h>

int main(){
    float numeroConta, saldo;

    printf("Digite o numero da conta: \n");
    scanf("%f%c", &numeroConta);

    printf("Digite o saldo da conta: \n");
    scanf("%f%c", &saldo);

    if(saldo <= 0){
        printf("CONTA ESTOURADA \n");
    }else{
        printf("CONTA NORMAL \n");
    }

    return 0;
}