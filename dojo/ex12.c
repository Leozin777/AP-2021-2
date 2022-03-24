/*FUP que lê um conjunto de 4 valores i, a, b, c, onde i é um valor inteiro e positivo e a, b, c, são quaisquer valores reais e os escreva. A seguir:
Se i=1 escrever os 3 valores a, b, c em ordem crescente;
Se i=2 escrever os 3 valores a, b, c em ordem decrescente;
Se i=3 escrever os 3 valores de forma que o maior valor entre a, b, c fica entre os outros dois.
*/

#include <stdio.h>

int main(){

    int i;
    float a, b, c;

    printf("Digite o valor de 'a': \n");
    scanf("%f%*c", &a);
    printf("Digite o valor de 'b': \n");
    scanf("%f%*c", &b);
    printf("Digite o valor de 'c': \n");
    scanf("%f%*c", &c);

    printf("Digite a opcao escolhida: \n");
    printf("Opcao 1 \n");
    printf("Opcao 2 \n");
    printf("Opcao 3 \n");
    scanf("%d%*c", &i);

    switch (i){
    case 1:
         if (a <= b && b <= c)
    {
      printf("A ordem crescente: %.2f %.2f %.2f\n", a, b, c);
    }
        else if (a <= c && c <= b)
    {
      printf("A ordem crescente: %.2f %.2f %.2f\n", a, c, b);
    }
        else if (b <= a && a <= c)
    {
      printf("A ordem crescente: %.2f %.2f %.2f\n", b, a, c);
    }
        else if (b <= c && c <= a) 
    {
      printf("A ordem crescente: %.2f %.2f %.2f\n", b, c, a);
    }
        else if (c <= a && a <= b) 
    {
      printf("A ordem crescente: %.2f %.2f %.2f\n", c, a, b);
    }
         else /* n3 <= n2 && n2 < n1 */
    {
      printf("A ordem crescente: %.2f %.2f %.2f\n", c, b, a);
    }
    break;
    
    case 2:

    if (a >= b && b >= c)
    {
      printf("A ordem decrescente: %.2f %.2f %.2f\n", a, b, c);
    }
        else if (a >= c && c >= b)
    {
      printf("A ordem decrescente: %.2f %.2f %.2f\n", a, c, b);
    }
        else if (b >= a && a >= c)
    {
      printf("A ordem decrescente: %.2f %.2f %.2f\n", b, a, c);
    }
        else if (b >= c && c >= a) 
    {
      printf("A ordem decrescente: %.2f %.2f %.2f\n", b, c, a);
    }
        else if (c >= a && a >= b) 
    {
      printf("A ordem decrescente: %.2f %.2f %.2f\n", c, a, b);
    }
         else /* n3 <= n2 && n2 < n1 */
    {
      printf("A ordem decrescente: %.2f %.2f %.2f\n", c, b, a);
    }
    break;

    case 3:

     if (a >= b && b >= c)
    {
      printf("O maior valor no meio: %.2f %.2f %.2f\n", b, a, c);
    }
    else if (b >= a && a >= c)
    {
      printf("O maior valor no meio: %.2f %.2f %.2f\n", a, b, c);
    }
    else{
        printf("O maior valor no meio: %.2f %.2f %.2f\n", a, c, b);
    }
    break;

    default:
        printf("numero invalido :(, digite novamente");
        break;
    }

    return 0;
}