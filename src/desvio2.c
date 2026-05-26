#include <stdio.h>

int main(){

    int ano;
    printf("digite um ano\n");
    scanf ("%d",&ano);

    if( ano % 4 == 0 ){
        printf("o ano %d é bissexto\n",ano);
    }
    else{
        printf("o ano %d NÃO é bissexto\n",ano);
    }
    return 0;





}