#include <stdio.h>

int main(void){   
    int mat[4][4] = {
                     {45, 32, 83, 95},
                     {26, 14, 37, 42},
                     {40, 43, 65, 77},
                     {74, 79, 48, 55}
                     };
    int soma = 0;
    int i, j;

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            soma += mat[i][j];
        }
    }
    printf("A media da matriz e: %d\n", soma/16);

    return 0;
}