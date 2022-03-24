/*FUP para efetuar a leitura de quatro números e apresentar os números que são divisíveis por 2 e por 3.*/

#include <stdio.h>

int main(){
    int n1, n2, n3, n4;

    printf("Digite o primeiro numero: ");
    scanf("%d%*c", &n1);

    printf("Digite o segundo numero: ");
    scanf("%d%*c", &n2);

    printf("Digite o terceiro numero: ");
    scanf("%d%*c", &n3);

    printf("Digite o quarto numero: ");
    scanf("%d%*c", &n4);

    //PRIMEIRO NUMERO
    if ((n1 %2 == 0 )&&(n1 %3 == 0 )){
        printf("O numero %d eh divisivel por 2 e por 3. \n", n1);
    }
    else if(n1 %2 == 0 ){
        printf("O numero %d eh divisivel por 2.\n", n1);
    } 
    else if(n1 %3 == 0 ){
        printf("O numero %.d eh divisivel por 3\n", n1);
    }
    else{
        printf("O numero nao eh divisivel \n");
    }
    /* SEGUNDO NUMERO */
    if ((n2 %2 == 0 )&&(n2 %3 == 0 )){
        printf("O numero %d eh divisivel por 2 e por 3. \n", n2);
    }
    else if(n2 %2 == 0 ){
        printf("O numero %d eh divisivel por 2.\n", n2);
    } 
    else if(n2 %3 == 0 ){
        printf("O numero %.d eh divisivel por 3\n", n2);
    }
    else{
        printf("O numero nao eh divisivel \n");
    }
    // TERCEIRO NUMERO
    if ((n3 %2 == 0 )&&(n3 %3 == 0 )){
        printf("O numero %d eh divisivel por 2 e por 3. \n", n3);
    }
    else if(n3 %2 == 0 ){
        printf("O numero %d eh divisivel por 2.\n", n3);
    } 
    else if(n3 %3 == 0 ){
        printf("O numero %.d eh divisivel por 3\n", n3);
    }
    else{
        printf("O numero nao eh divisivel \n");
    }
    //QUARTO NUMERO
    if ((n4 %2 == 0 )&&(n4 %3 == 0 )){
        printf("O numero %d eh divisivel por 2 e por 3. \n", n4);
    }
    else if(n4 %2 == 0 ){
        printf("O numero %d eh divisivel por 2.\n", n4);
    } 
    else if(n4 %3 == 0 ){
        printf("O numero %.d eh divisivel por 3\n", n4);
    }
    else{
        printf("O numero nao eh divisivel \n");
    }



    return 0;
}