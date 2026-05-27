#include <stdio.h>

int main(){

    int linha, coluna;

    linha = 1; 
    coluna = 1;

    while(linha <= 10 ){
        while(coluna <= 10 ){
            printf("#");
            coluna++;
        }
        // voltar a contagem de coluna ao valor 1 //

        coluna = 1;   
        printf("\n");
        linha++;
    }

}