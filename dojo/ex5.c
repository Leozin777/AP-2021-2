/*FUP que lê dois valores e escreve cada um juntamente com a mensagem:
 “É múltiplo de 2” ou “Não é múltiplo de dois”.*/

#include <stdio.h>

int main(){
    int n1, n2;

    printf("Digite o primeiro numero: ");
    scanf("%d%c", &n1);

    printf("Digite o segundo numero: ");
    scanf("%d%c", &n2);

    if(n1 %2 == 0 ){
        printf("Eh multiplo de 2.\n");

    }else{
        printf("Nao eh multiplo de 2\n");
    }

    if(n2 %2 == 0 ){
        printf("Eh multiplo de 2. \n");

    }else{
        printf("Nao eh multiplo de 2 \n");
    }

    return 0;
}