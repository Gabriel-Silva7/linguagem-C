#include <stdio.h>

int main(){

// fazer uma contagem de 1 a 50 e exibir somente os
// numeros multiplos de 3 //

int i = 1;

while( i <= 50 ){
    if(i%3 == 0){
        printf("este numero %d é multiplo de 3\n",i);
    }
    i++;
}
return 0;
}