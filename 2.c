#include <stdio.h>

int main(void){   
    int mat[4][4] = {
                     {40, 43, 65, 77},
                    };
    int soma = 0;
    int i, j;

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            soma += mat[i][j];
        }
    }

    printf("A soma da matriz e: %d\n", soma);

    return 0;
}