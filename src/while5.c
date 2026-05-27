#include <stdio.h>

int main(){

    int linha, coluna;

    linha = 1; 
    coluna = 1;

    while(linha <= 5 ){
        while(coluna <= linha ){
            printf("#");
            coluna++;
        }
        // voltar a contagem de coluna ao valor 1 //

        coluna = 1;   
        printf("\n");
        linha++;
    }

}