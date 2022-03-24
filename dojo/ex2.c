/*FUP para determinar se uma pessoa é maior ou menor de idade.*/

#include <stdio.h>

int main(){
    int idade;
    printf("Digite sua a idade:");
    scanf("%d%*c", &idade);

    if (idade >= 18){
        printf("Voce eh maior de idade!");
    }

    else{
        printf("Voce eh menor de idade!");
    }


    return 0;
}