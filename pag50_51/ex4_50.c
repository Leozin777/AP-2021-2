#include <stdio.h>

int main(){
    float n1;
    float n2;
    float p1 = 2;
    float p2 = 3;
    printf("qual o valor da primeira nota?\n");
    scanf("%f%*c", &n1);
    printf("qual o valor da segunda nota?\n");
    scanf("%f%*c", &n2);
    float media = (n1 * p1 + n2* p2) / (p1 + p2);
    printf("a media eh:%.2f", media);


    return 0;
}