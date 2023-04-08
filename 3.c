#include <stdio.h>

int main(void){   
    int mat[4][4] = {
                     {45, 32, 83, 95},
                     {26, 14, 37, 42},
                     {40, 43, 65, 77},
                     {74, 79, 48, 55}
                     };
    int mult = 1;
    int i;

    for(i = 0; i < 4; i++) {
        mult = mult * mat[i][1];
    }

    printf("A multiplicacao da matriz e: %d\n", mult);

    return 0;
}