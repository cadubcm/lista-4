#include <stdio.h>

int main(void){   
    int mat[4][4] = {
                     {45, 32, 83, 95},
                     {26, 14, 37, 42},
                     {40, 43, 65, 77},
                     {74, 79, 48, 55}
                     };
    int soma1 = 0;
    int soma2 = 0;
    int j;

    for(j = 0; j < 4; j++) {
        soma1 += mat[1][j];
    }
    for(j = 0; j < 4; j++) {
        soma2 += mat[3][j];
    }

    if(soma1 > soma2){
        printf("A maior soma da matriz e: %d, linha 1\n", soma1);
    }
    else{
        printf("A maior soma da matriz e: %d, linha 3\n", soma2);
    }

    return 0;
}