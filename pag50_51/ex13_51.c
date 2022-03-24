#include <stdio.h>

int main(){
    float n;
    float tabuada0,tabuada1,tabuada2,tabuada3,tabuada4,tabuada5,tabuada6,tabuada7,tabuada8,tabuada9,tabuada10;
    printf("qual o numero que voce deseja ver a tabuada?\n");
    scanf("%f%*c", &n);
    tabuada0 = n * 0;
    tabuada1 = n * 1;
    tabuada2 = n * 2;
    tabuada3 = n * 3;
    tabuada4 = n * 4;
    tabuada5 = n * 5;
    tabuada6 = n * 6;
    tabuada7 = n * 7;
    tabuada8 = n * 8;
    tabuada9 = n * 9;
    tabuada10 = n * 10;
    printf("%.0f x 0 = %.0f\n", n, tabuada0);
    printf("%.0f x 1 = %.0f\n", n, tabuada1);
    printf("%.0f x 2 = %.0f\n", n, tabuada2);
    printf("%.0f x 3 = %.0f\n", n, tabuada3);
    printf("%.0f x 4 = %.0f\n", n, tabuada4);
    printf("%.0f x 5 = %.0f\n", n, tabuada5);
    printf("%.0f x 6 = %.0f\n", n, tabuada6);
    printf("%.0f x 7 = %.0f\n", n, tabuada7);
    printf("%.0f x 8 = %.0f\n", n, tabuada8);
    printf("%.0f x 9 = %.0f\n", n, tabuada9);
    printf("%.0f x 10 = %.0f\n", n, tabuada10);

    return 0;
}